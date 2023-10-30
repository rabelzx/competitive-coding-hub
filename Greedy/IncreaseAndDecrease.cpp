#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, nIguais = 0; 
    cin >> n; 

    vector<int> numeros(n); 
    
    long long soma = 0;
    for(int i = 0; i < n; i++){ 
        cin >> numeros[i]; 
        soma += numeros[i];
    }
    long long media = soma / n;

    //itera até o penúltimo elemento do array
    for(int i = 0; i < n - 1; i++){
        if(numeros[i] == media){
            nIguais++;
        } else if(numeros[i] > media){
            //passa para o proximo o elemento o restante
            numeros[i + 1] += numeros[i] - media; 
            numeros[i] = media;
            nIguais++; 
        } else if(numeros[i] < media){
            //remove do proximo elemento tanto que falta para atingir a media
            numeros[i + 1] -= media - numeros[i];  
            numeros[i] = media; 
            nIguais++;  
        }
    }

    //verifica ultimo elemento do array
    if(numeros[n - 1] == media)
        nIguais++; 

    cout << nIguais << endl; 

    return 0;
}