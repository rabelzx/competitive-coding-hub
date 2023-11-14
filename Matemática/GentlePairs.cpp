#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pares_desejados = 0;
    vector<pair<int, int>> pares(n);

    for (int i = 0; i < n; i++) {
        cin >> pares[i].first >> pares[i].second;
    }

    for(int i = 0; i < n; i++){
        pair<int, int> aux = pares[i];
        for(int j = 0; j < n; j++){
            if(pares[j].second >= pares[i].first || aux.first == pares[j].first || aux.second == pares[j].second) 
                continue;
             // Calcular a inclinação diretamente no loop
            double slope = static_cast<double>(aux.second - pares[j].second) / (aux.first - pares[j].first);

            if (slope >= -1 && slope <= 1)
                pares_desejados++;            
        }
    }

    cout << pares_desejados << endl;
    
    return 0;
}
