#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;

    while(t--){
        int x, y, k; 
        cin >> x >> y >> k;

        //significa que ele pode pegar a chave no caminho
        if(y <= x){
            cout << x << endl; 
        } else{
            if(k >= (y - x)){
                //quando ele nao pode pegar a chave o caminho, mas consegue carregar o bau por k segundos
                cout << y << endl;
            } else{
                //quando ele nao pode pegar a chave no caminho e nao consegue carregar o bau por k segundos 
                cout << x + k + (2 * (y -(x + k))) << endl; 
            }
        }
    }

    return 0; 
}