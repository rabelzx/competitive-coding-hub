#include <bits/stdc++.h>
using namespace std;

long long soma(vector<int> a, vector<int> b, int n){

    long long soma = 0; 
    for(int i = 0; i < n; i++){
        soma += a[i] * b[i];
    }

    return soma; 
}

int main(){

    int n; 
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++)
        cin >> b[i];

    long long resultado = soma(a, b, n);

    if(resultado == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0; 
}