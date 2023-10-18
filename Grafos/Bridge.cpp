#include <bits/stdc++.h>
using namespace std; 

//lista de adjacencia
const int MAX = 51; 
vector<int> adj[MAX]; 

//tempo de visita na dfs e tempo mais baixo a partir de um no
vector<int> visitTime(MAX, -1); 
vector<int> lowTime(MAX, -1); 

//variaveis para o contador e para o controle do numero de pontes
int timer = 0; 
int bridges = 0; 

void dfs(int u, int parent){
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

int main(){
    int n, m; 
    cin >> n >> m; 
    
    for(int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b; 
        adj[a].push_back(b); 
        adj[b].push_back(a); 
    }

    for(int i = 1; i <= n; i++){
        if(visitTime[i] == -1)
            dfs(i, -1); 
    }

    cout << bridges << endl; 

    return 0;
}
