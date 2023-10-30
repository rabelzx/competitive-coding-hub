#include <bits/stdc++.h>
#include <string>
#include <sstream>

using namespace std; 

//lista de adjacencia
const int MAX = 100; 
vector<vector<int>> adj; 

//variaveis para o contador e para o controle do numero de pontes
int dfsRoot;
int rootChildren;
int timer = 1;
vector<int> dfsNum;
vector<int> dfsLow;
vector<int> dfsParent;
vector<bool> artiVertices; 

void DFS(int u){
    dfsNum[u] = dfsLow[u] = timer++;

    for (int i = 0; i < adj[u].size(); ++i){
        int v = adj[u][i];

        if (dfsNum[v] == 0){
            dfsParent[v] = u;
            if (u == dfsRoot)
                ++rootChildren;
            DFS(v);

            if (u != dfsRoot && dfsLow[v] >= dfsNum[u])
                artiVertices[u] = true;

            dfsLow[u] = min(dfsLow[u], dfsLow[v]);
        }

        else if (v != dfsParent[u]) 
            dfsLow[u] = min(dfsLow[u], dfsNum[v]); 
    }
}

int main(){
    int n; 
    while(cin >> n, n != 0){
        cin.ignore();

        adj.clear();
        adj.resize(n + 1);
        dfsNum.clear();
        dfsNum.resize(n + 1, 0);
        dfsLow.clear();
        dfsLow.resize(n + 1, 0);
        dfsParent.clear();
        dfsParent.resize(n + 1, 0);
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

         for (int p = 1; p < adj.size(); ++p){
            if (dfsNum[p] == 0){
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


