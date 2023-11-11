#include <bits/stdc++.h>
using namespace std;

long long inf = std::numeric_limits<long long>::max();
typedef pair<long long, long long> ll; 

void dijkstra(const vector<vector<ll>>& adj, int start, int end) {
    int n = adj.size();
    vector<long long> distances(n, inf);
    vector<long long> parent(n, -1);

    //a distancia do vertice inicial para ele mesmo é 0
    distances[start] = 0;

    //minHeap para armazenar os vertices e suas distancias
    priority_queue<ll, vector<ll>, greater<ll>> minHeap; 
    minHeap.push(make_pair(0, start));

    while (!minHeap.empty()) {
        long long u = minHeap.top().second;
        minHeap.pop();

        //se o vertice atual for o destino, pare
        if (u == end)
            break;

        //pra cada vizinho do vertice atual
        for (const auto& edge : adj[u]) {
            long long v = edge.first;
            long long weight = edge.second;

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
        vector<long long> path;
        long long current = end;

        //reconstruindo o caminho: adiciona o vertice atual no caminho e vai para o pai dele
        while (current != -1) {
            path.push_back(current);
            current = parent[current];
        }

        //imprime o vector path ao contrario
        reverse(path.begin(), path.end());
        unsigned int i; 
        for (i = 0 ; i < path.size(); i++) {
            cout << path[i];
            if(i != path.size() - 1)
                cout << " ";
            else
                cout << endl;
        }

        cout << endl;
    }   
}

int main() {
    long long n, m; 
    cin >> n >> m; 

    vector<vector<ll>> adj(n + 1);

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
