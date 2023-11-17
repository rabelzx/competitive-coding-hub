#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, diferenca; 
    cin >> a >> b; 

    diferenca = a - b;
    double result = 100 * (diferenca / (double)a);
    cout << fixed << setprecision(20) << result << endl;

    return 0; 
}