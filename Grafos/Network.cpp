#include <bits/stdc++.h>
#include <string>
#include <sstream>

using namespace std; 

static const int UNVISITED = 0;

//lista de adjacencia
const int MAX = 100; 
vector<vector<int>> adj; 

//tempo de visita na dfs e tempo mais baixo a partir de um no
vector<int> visitTime(MAX, -1); 
vector<int> lowTime(MAX, -1); 

//variaveis para o contador e para o controle do numero de pontes
int timer = 0; 
int bridges = 0; 

int dfsRoot;
int rootChildren;
int dfsCounter = 1;
vector<int> dfsNum;
vector<int> dfsLow;
vector<int> dfsParent;
// Articulation Vertices
vector<bool> artiVertices; 

void DFS(int u)
{
    dfsNum[u] = dfsLow[u] = dfsCounter++;
    for (int i = 0; i < adj[u].size(); ++i)
    {
        int v = adj[u][i];
        if (dfsNum[v] == UNVISITED)
        {
            dfsParent[v] = u;
            if (u == dfsRoot)
                ++rootChildren;
            DFS(v);

            // If u is not the root and its child v has no back edge
            // to reach u (meaning there is no cycle), then u is an
            // articulation vertex since it is able to isolate v.
            if (u != dfsRoot && dfsLow[v] >= dfsNum[u])
                artiVertices[u] = true;

            dfsLow[u] = min(dfsLow[u], dfsLow[v]);
        }
        // Edge to the parent is not a back edge.
        else if (v != dfsParent[u]) 
            dfsLow[u] = min(dfsLow[u], dfsNum[v]); 
    }
}

/*void dfs(int u, int parent){
    visitTime[u] = lowTime[u] = timer++; 
    for(int v : adj[u]){
        if(v == parent)
            continue; 
        if(visitTime[v] == -1){
            dfs(v, u); 
            lowTime[u] = min(lowTime[u], lowTime[v]); 
            //condicao para descobrir se a aresta entre u e v é uma ponte
            if(lowTime[v] > visitTime[u])
                bridges++; 
        } else {
            lowTime[u] = min(lowTime[u], visitTime[v]);
        }
    }
}
*/

int main(){
    int n; 
    while(cin >> n, n != 0){
        cin.ignore();

        adj.clear();
        adj.resize(n + 1);
        dfsNum.clear();
        dfsNum.resize(n + 1, UNVISITED);
        dfsLow.clear();
        dfsLow.resize(n + 1, UNVISITED);
        dfsParent.clear();
        dfsParent.resize(n + 1, UNVISITED);

        artiVertices.clear();
        artiVertices.resize(n + 1, false);

        string line; 
        while(getline(cin, line), line != "0"){
            stringstream ss(line); 
            int u, v; 
            ss >> u; 
            while(ss >> v){
                adj[u].push_back(v); 
                adj[v].push_back(u); 
            }
        }

        /*for(int i = 1; i <= n; i++){
            if(visitTime[i] == -1)
                dfs(i, -1); 
        }

        cout << bridges << endl; */
         for (int p = 1; p < adj.size(); ++p)
        {
            if (dfsNum[p] == UNVISITED)
            {
                dfsRoot = p;
                rootChildren = 0;
                DFS(p);
                if (rootChildren > 1)
                    artiVertices[dfsRoot] = true;
            }
        }
        cout << count(artiVertices.begin(), artiVertices.end(), true) << endl;
    }

    return 0; 
}


