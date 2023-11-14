#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; 
    cin >> n >> q; 
    
    string s;     
    cin >> s;

    for(int i = 0; i < q; i++){
        int l, r, consecutives = 0;
        cin >> l >> r; 

        for(int j = l; j < r; j++){
            if(s[j - 1] == s[j]){
                consecutives++;  

            }
        } 

        cout << consecutives << endl;
    }

    return 0; 
} //mississippi 