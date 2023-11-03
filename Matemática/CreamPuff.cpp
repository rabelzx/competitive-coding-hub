#include <bits/stdc++.h>
using namespace std;

void findDivisors(long long n){ 
    vector<long long> divisores; 

    for (long long i = 1; i * i <= n; i++) { 
        if (n % i == 0) { 
            divisores.push_back(i);
            if (n / i != i) 
                divisores.push_back(n / i);
        }
    } 

    sort(divisores.begin(), divisores.end());

    for(int i = 0; i < divisores.size(); i++){
        cout << divisores[i] << endl;
    }
} 
  
int main() 
{ 
    long long n; 
    cin >> n; 
 
    findDivisors(n); 
    return 0; 
}