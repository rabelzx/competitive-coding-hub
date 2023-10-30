#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii; 

void dijkstra(const vector<vector<ii>>& adj, int start, int end) {
    int n = adj.size();
    vector<int> distances(n, numeric_limits<int>::max());
    vector<int> parent(n, -1);

    //a distancia do vertice inicial para ele mesmo é 0
    distances[start] = 0;

    //minHeap para armazenar os vertices e suas distancias
    priority_queue<ii, vector<ii>, greater<ii>> minHeap; 
    minHeap.push(make_pair(0, start));

    while (!minHeap.empty()) {
        int u = minHeap.top().second;
        minHeap.pop();

        //se o vertice atual for o destino, pare
        if (u == end)
            break;

        for (const auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (distances[u] + weight < distances[v]) {
                distances[v] = distances[u] + weight;
                parent[v] = u;
                minHeap.push(make_pair(distances[v], v));
            }
        }
    }

    //se o vertice destino nao foi alcancado, nao existe caminho
    if (parent[end] == -1) {
        cout << -1 << endl;
    } else {
        vector<int> path;
        int current = end;

        //reconstruindo o caminho: adiciona o vertice atual no caminho e vai para o pai dele
        while (current != -1) {
            path.push_back(current);
            current = parent[current];
        }

        //imprime o vector path ao contrario
        for (int i = path.size() - 1; i >= 0; i--) {
            cout << path[i];
            if (i > 0)
                cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int n, m; 
    cin >> n >> m; 

    vector<vector<ii>> adj(n + 1);

    for(int i = 0 ; i < m; i++){
        int u, v, w; 
        cin >> u >> v >> w; 
        adj[u].push_back({v, w}); 
        adj[v].push_back({u, w}); 
    }

    //caminho minimo entre vertices 1 e n
    dijkstra(adj, 1, n);

    return 0;
}
