#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ok = 1; 
    cin >> n;

    for(int i = 0; i < n; i++){
        int a; 
        cin >> a;
        if(a % 2 == 0){
            if(a % 3 == 0 || a % 5 == 0)
                continue;
            else{
                ok = 0;
                break;
            }
        } 
    }

    if(ok)
        cout << "APPROVED" << endl;
    else
        cout << "DENIED" << endl;  

    return 0; 
}