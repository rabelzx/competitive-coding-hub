#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    //adiciona a como vizinho de b e vice-versa
    for (int i = 0; i < m; i++) {
      int a, b;
      cin >> a >> b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }

    int grupos = 0;

    //logica principal do problema
    while (true){
      int numExpulsos = 0; 
      vector <int> expulsos; 

      //checa quais alunos estao conectados a apenas um outro e o aloca no vetor de expulsos
      for (int i = 1; i <= n; i++){
        if (adj[i].size() == 1){
          numExpulsos++; 
          expulsos.push_back(i); 
        }
      }

      //se algum aluno tiver sido expulso nesse round incrementa o numero de grupos
      if (numExpulsos > 0){
        grupos++;

        //remove o aluno expulso da lista de adjacencia do seu vizinho
        for (int i = 0; i < numExpulsos; i++){
          int vizinho = adj[expulsos[i]][0]; 
          adj[expulsos[i]].clear(); 
          adj[vizinho].erase(remove(adj[vizinho].begin(), adj[vizinho].end(), expulsos[i]), adj[vizinho].end());
        }
      } else
          break; 
      
    }

    cout << grupos << endl;

    return 0;
}
