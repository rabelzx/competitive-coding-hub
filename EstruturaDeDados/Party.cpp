#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    vector<int> superiores(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> superiores[i];
    }

    int gruposNecessarios = 0; 
    for(int i = 1; i <= n; i++){
        int k = superiores[i];
        int grupos = 1; 

        //percorre todos os superiores até enocontrar um funcionario sem superior
        while(k != -1){
            k = superiores[k];
            grupos++;
        }

        //atualiza o numero de grupos necessarios
        if(grupos > gruposNecessarios){
            gruposNecessarios = grupos;
        }
    }

    cout << gruposNecessarios << endl;
    return 0; 
}