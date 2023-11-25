#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; 
    cin >> a >> b >> c;

    int ans = 0; 

    if(a == b || b == c || a == c){
        int soma = a + b + c;
        if(soma != a * 3){
            ans = 1; 
        }
    }

    if(ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
        
}