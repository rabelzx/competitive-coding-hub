#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n, x; 
        cin >> n >> x;

        vector<int> v(x + 1, 0);
        for(int i = 0; i < n; i++){
            int posto; 
            cin >> posto; 
            v[posto] = 1;
        }

        int maxtanque = 0; 
        int tanque = 0;

        for(int i = 1; i <= x; i++){
            tanque++; 
            if(i == x){ 
                tanque = tanque * 2;
                maxtanque = max(maxtanque, tanque);   
            } else if(v[i] == 0){
                continue;
            }else{
                maxtanque = max(maxtanque, tanque);
                tanque = 0;
            }
        }

        cout << maxtanque << endl;

    }

    return 0; 
}