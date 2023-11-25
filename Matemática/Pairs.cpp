#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; 
    cin >> n >> k;

    vector<long long> numeros(n + 1);
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    vector<pair<long long, long long>> pares;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            pair<long long, long long> par(numeros[i], numeros[j]);
            pares.push_back(par);
        }
    }

    vector<long long> produtos;
    for (const auto& par : pares) {
        produtos.push_back(par.first * par.second);
    }

    sort(produtos.begin(), produtos.end());
    cout << produtos[k - 1] << endl;

    return 0;
}
