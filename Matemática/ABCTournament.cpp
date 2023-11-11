#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> rodada(vector<pair<int, int>> jogadores, int n){
    vector<pair<int, int>> vencedores(1 << n);

    for(int i = 0; i < (1 << n); i += 2) {
        //passar a posicao do ganhador da rodada
        if(jogadores[i].first > jogadores[i + 1].first){
            vencedores[i] = jogadores[i]; 
        } else {
            vencedores[i] = jogadores[i + 1];
        }

        cout << vencedores[i].first << " ";

    }

    cout << endl;
    return vencedores;
}

int main(){
    int n; 
    cin >> n; 

    vector<pair<int, int>> jogadores(1 << n); 
   
    for (int i = 0; i < (1 << n); i++){
        cin >> jogadores[i].first;
        jogadores[i].second = i + 1;
    }

    while(jogadores.size() > 2){
        jogadores = rodada(jogadores, n);
        n--; 
    }

    int semi; 
    if(jogadores[0].first > jogadores[1].first)
        semi = jogadores[1].second;
    else
        semi = jogadores[0].second;

    cout << semi << endl;

    return 0; 
}

/*

solucao otima pegar metade de cada parte:


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n; 

    vector<pair<int, int>> A((1 << n)/2);
    vector<pair<int, int>> B((1 << n)/2);

    for(int i = 0; i < (i << n) / 2; i++){
        cin >> A[i].first;
        A[i].second = i + 1;
    }

    for(int i = 0; i < (i << n) / 2; i++){
        cin >> B[i].first;
        B[i].second = i + 1;
    }

    pair<int, int> vencedor = max_element(A.first.begin(), A.first.end());
    pair<int, int> semi = max_element(B.first.begin(), B.first.end());

    return 0; 
}*/