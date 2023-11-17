#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 

    int flag = 1; 
    int count = 0;
    
    for(int i = 2; i <= n; i++){
        long long base; 
        for(base = sqrt(i); base >= 2; base--){
            for(long long potencia = 2; pow(base, potencia) <= i; potencia++){
                //pode ser representado por uma potencia de base
                if(pow(base, potencia) == i){
                    //cout << i << " " << "->" <<  base << "^" << potencia << endl;
                    count++;
                    flag = 0; 
                    break;
                }
            }
            if(!flag){
                flag = 1; 
                break;
            }
        }
               
    }

    cout << n - count << endl;

    return 0; 
}