#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    while(t--){
        int n; 
        cin >> n; 

        vector<int> caixas(n);
        for(int i = 0; i < n; i++){
            cin >> caixas[i];
        }

        for(int d = 1; d <= n; d++){
            //caso seja divisivel
            long long resposta = -1; 
            if(n % d == 0){
                long long max = 1e18, min = -1e18; 
                for(int i = 0; i < n; i += d){

                }
            }
        }
    
    }  
}