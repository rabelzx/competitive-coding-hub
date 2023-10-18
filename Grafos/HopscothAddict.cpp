#include<bits/stdc++.h>
using namespace std; 

int main() {
  int n, m, u, v;
  cin >> n >> m; 

  vector<int> adj[n + 1];
  int dis[n + 1][4]; 
  memset(dis, -1, sizeof dis); 

  for(int i = 1; i <= m; i++){
    cin >> u >> v;
    adj[u].push_back(v); 
  }

  int s, t; 
  cin >> s >> t; 

  auto bfs = [&](int s){
    dis[s][0] = 0; 

    queue<pair<int,int>> fila; 
    fila.push({s, 0}); 

    while(fila.size()){
      pair<int,int> f = fila.front(); 
      fila.pop(); 

      int u = f.first; 
      int t = f.second; 

      for(auto v : adj[u]){
        int nx = (t + 1) % 3; 
        if(dis[v][nx] == -1){
          dis[v][nx] = dis[u][t] + 1; 
          fila.push({v, nx}); 
        }
      }
    }
  }; 

  bfs(s); 
  if(dis[t][0] == -1)
    cout << -1 << endl; 
  else
    cout << dis[t][0] / 3 << endl; 
}