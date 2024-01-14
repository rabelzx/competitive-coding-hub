#include <bits/stdc++.h>
using namespace std;

struct Ponto {
    long long x, y;
};

long long manhattan(const Ponto& p1, const Ponto& p2) {
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

long long maxDistancia(vector<Ponto>& pontos, int esquerda, int direita) {
    if (esquerda == direita) {
        return 0;
    } else if (esquerda + 1 == direita) {
        return manhattan(pontos[esquerda], pontos[direita]);
    } else {
        long long meio = (esquerda + direita) / 2;

        long long maxEsquerda = maxDistancia(pontos, esquerda, meio);
        long long maxDireita = maxDistancia(pontos, meio + 1, direita);
        
        long long somaMeio = manhattan(pontos[meio], pontos[meio + 1]);
        return max({maxEsquerda, maxDireita, somaMeio});
    }
}

int main() {
    int n; 
    cin >> n;

    vector<Ponto> pontos; 

    for(int i = 0; i < n; i++){
        long long x, y; 
        cin >> x >> y;
        pontos.push_back({x, y});
    }

    sort(pontos.begin(), pontos.end(), [](const Ponto& a, const Ponto& b) {
        return a.x < b.x;
    });

    cout << maxDistancia(pontos, 0, pontos.size() - 1) << endl;
    return 0;
}
