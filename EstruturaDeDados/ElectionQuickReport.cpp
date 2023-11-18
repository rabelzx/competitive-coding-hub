#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;

    vector<int> candidatos(n + 1);
    int vencedor = 0;

    for(int i = 0; i < m; i++){
        int voto;
        cin >> voto;
        candidatos[voto]++;

        if(candidatos[voto] > candidatos[vencedor]){
            vencedor = voto;
        } else if(candidatos[voto] == candidatos[vencedor] && voto < vencedor){
            vencedor = voto;
        }

        cout << vencedor << endl;
    }

}