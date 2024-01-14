#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d; 
    cin >> a >> b >> c >> d;

    long long result = max (a * c, b * d);
    result = max (result, a * d);
    result = max (result, b * c);

    cout << result << endl;
}