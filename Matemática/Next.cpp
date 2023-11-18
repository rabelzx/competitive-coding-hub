#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n; 
    int maior = 0, sugundoMaior = 0; 
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        if(x > maior){
            sugundoMaior = maior; 
            maior = x;
        }
        else if(x > sugundoMaior && x != maior){
            sugundoMaior = x; 
        }
    }

    cout << sugundoMaior << endl;
}