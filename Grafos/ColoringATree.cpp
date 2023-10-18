#include <bits/stdc++.h>
using namespace std;

void dfs(int v, int &steps, vector<int> tree, vector<int> colors) {
    if (colors[v] != 0) {
        // Se o nó já estiver na cor desejada, não precisamos fazer nada.
        return;
    }

    int desiredColor = colors[v];
    steps++;
    cout << steps << endl; 

    // Colorir o nó atual com a cor desejada.
    colors[v] = desiredColor;

    // Percorrer todos os filhos do nó atual e chamamos a DFS neles.
    for (int u : tree[v]) {
        dfs(u, steps, tree, colors);
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> tree[n + 1];
    vector<int> colors(n + 1);
    
    // Ler os pais de cada nó e montar a árvore.
    for (int i = 2; i <= n; i++) {
        int parent;
        cin >> parent;
        tree[parent].push_back(i);
    }

    // Ler as cores desejadas.
    for (int i = 1; i <= n; i++) {
        cin >> colors[i];
    }

    int steps = 0;
  
    // Iniciar a DFS a partir do nó raiz (1).
    dfs(1, steps, tree, colors);

    // Imprimir o número mínimo de passos.
    //cout << steps - 1 << endl; 

    return 0;
}
