#include <bits/stdc++.h>
using namespace std;
 
bool isGood(string s){
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1])
            return false;
    }
    
    return true;
}
 
int main(){
    int T; 
    cin >> T; 
 
    while(T--){
        int n, m, ok = 1, tipo; 
        cin >> n >> m;
        
        string s, t; 
        cin >> s >> t;
 
        //se a string já iniciar boa
        if(isGood(s)){
            cout << "YES" << endl;
            continue;
        } else {
            //verifica se s possui apenas um tipo de inversao
            set<char> uniqueChars; 
            for(int i = 0; i < s.size() - 1; i++){
                if(s[i] == s[i + 1]){
                    uniqueChars.insert(s[i]);
                    tipo = i; 
                }
 
                int uniqueCharsSize = uniqueChars.size();
 
                if(uniqueCharsSize > 1){
                    ok = 0; 
                    break;
                }
 
            }
        }
 
        if(!ok){
            cout << "NO" << endl;
            continue;
        }
 
        //se a string t não for boa NUNCA será possivel
        if(!isGood(t)){
            cout << "NO" << endl;
            continue;
        } else{
            //se t nao comecar e terminar com o mesmo digito nao serve pra arrumar s 
            if(t[0] != t[m - 1] || t[0] == tipo){
                cout << "NO" << endl;
                continue;
            }
        }
 
        cout << "YES" << endl;
 
    }
 
    return 0; 
}