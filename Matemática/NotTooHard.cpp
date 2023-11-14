#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, soma = 0;   
    cin >> n >> x; 

    for(int i = 0; i < n; i++){
        int a; 
        cin >> a; 

        if(a <= x)
            soma += a;
    }

    cout << soma << endl;
}