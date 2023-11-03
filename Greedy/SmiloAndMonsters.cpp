#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n; 
        cin >> n;

        long long soma = 0;

        vector<int> hordas(n);
        for(int i = 0; i < n; i++){
            cin >> hordas[i];
            soma += hordas[i];
        }

        //ordenamos as hordas em ordem crescente
        sort(hordas.begin(), hordas.end());
        
        long long ataques = 0;
        if(soma % 2 == 1){
            ataques++; 
            hordas[0]--;
        }
        long long metade = soma / 2;

        int i = 0;
        long long somaAtual = 0; 

        //quantidade de hordas que serão eliminadas com o ataque 2
        while(i < n && somaAtual + hordas[i] <= metade){
            somaAtual += hordas[i];
            i++;
        }

        //inimigos que serão eliminados individualmente + hordas que serão eliminadas de uma vez 
        ataques += metade + (n - i); 
        cout << ataques << endl;  
    }   

    return 0; 
}