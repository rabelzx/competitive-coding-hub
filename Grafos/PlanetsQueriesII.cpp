#include <bits/stdc++.h>
using namespace std;

int bfs(int a, int b, int size, vector<vector<int>>& adj, vector<vector<int>>& memo){
  queue<int> fila;
  vector<bool> visitado(size + 1, false);

  fila.push(a);
  visitado[a] = true;

  int distancia = 0; 

  while (!fila.empty()) {
    int nivelSize = fila.size(); 

    for (int i = 0; i < nivelSize; i++) {
      int planeta = fila.front();
      fila.pop();

      if (planeta == b)
        return distancia;

      for (int vizinho : adj[planeta]) {
        if (!visitado[vizinho]) {
          visitado[vizinho] = true;
          fila.push(vizinho);

          if(a != vizinho)
            memo[a][vizinho] = distancia + 1;
        }
      }
    }

    distancia++;
  }

  return -1;
}

int main(){
    int n, q; 
    cin >> n >> q;

    vector<vector<int>> adj(n + 1);
    vector<vector<int>> memo(n + 1, vector<int>(n + 1, -1));

    for(int i = 1; i <= n; i++){
        int x; 
        cin >> x; 
        adj[i].push_back(x);
    }

    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;

        if(memo[a][b] != -1){
          cout << memo[a][b] << endl;
        }
        else{
          cout << bfs(a, b, n, adj, memo) << endl;
        }
    }

    return 0;
}