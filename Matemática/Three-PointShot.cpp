#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y; 
    cin >> x >> y; 
    int perdedor = min(x, y);
    int ganhador = max(x, y);

    if(perdedor + 3 > ganhador)
        cout << "Yes" << endl; 
    else
        cout << "No" << endl;

    return 0; 
}