#include <bits/stdc++.h>
using namespace std;

bool digitosIguais(int i, int j){
    string string1 = to_string(i); 
    string string2 = to_string(j);

    if(string1[0] != string2[0])
        return false; 

    for (char digito : string1) {
        if (digito != string1[0]) {
            return false;  // Dígitos diferentes encontrados em num1
        }
    }
    
    for (char digito : string2) {
        if (digito != string2[0]) {
            return false;  // Dígitos diferentes encontrados em num2
        }
    }

    return true; 
}

int main(){

    int n, diasIguais = 0; 
    cin >> n; 

    for(int i = 1; i <= n; i++){
        int dias; 
        cin >> dias; 

        for(int j = 1; j <= dias; j++){
            if(digitosIguais(i, j))
                diasIguais++; 
        }

    }

    cout << diasIguais << endl; 
    return 0;
}