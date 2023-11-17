#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n; 
    vector<tuple<int, int, int>> lojas(n);

    for(int i = 0; i < n; i++){
        int x, y, z; 
        cin >> x >> y >> z; 
        lojas[i] = make_tuple(x, y, z);
    }

    //ordenar por y(valor) mais barato
    sort(lojas.begin(), lojas.end(), [](auto &left, auto &right){
        return get<1>(left) < get<1>(right);
    });

    int ans = -1; 
    for(int i = 0; i < n; i++){
        if(get<2>(lojas[i]) > get<0>(lojas[i])){
            ans = get<1>(lojas[i]); 
            break; 
        }
    }

    cout << ans << endl;
    return 0; 
}