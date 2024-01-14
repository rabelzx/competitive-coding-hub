#include <bits/stdc++.h>
using namespace std;

using ii = pair<int, int>;
using edge = tuple<int, int, int>;

const int MAX { 100010 };
vector<ii> adj[MAX];

long long prim(int u, size_t N)
{
    set<int> visitados;
    visitados.emplace(u); 

    priority_queue<ii, vector<ii>, greater<ii>> pq;

    for (const ii& p : adj[u])
        pq.emplace(p.second, p.first);

    long long mst = 0;

    while (visitados.size() < N)
    {
        int v, w;

        do {
            if (pq.empty()) {
                // Graph is disconnected
                return -1;
            }

            tie(w, v) = pq.top();
            pq.pop();
        } while (visitados.count(v));

        mst += w;
        visitados.emplace(v);

        for (const ii& p : adj[v])
            pq.emplace(p.second, p.first);
    }

    return mst;
}

int main() {
    int n, m; 
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    long long ans = prim(1, n);

    if (ans == -1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
