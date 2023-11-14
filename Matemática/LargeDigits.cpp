#include <bits/stdc++.h>
using namespace std;

int main(){
    string first; 
    string second;

    cin >> first >> second; 
    int sum1 = 0; 
    int sum2 = 0;

    for(int i = 0; i < first.size(); i++){
        sum1 += (first[i] - '0'); 
    }

    for(int i = 0; i < second.size(); i++){
        sum2 += (second[i] - '0'); 
    } 

    if(sum1 > sum2)
        cout << sum1 << endl;
    else if(sum1 == sum2)
        cout << sum1 << endl;
    else
        cout << sum2 << endl;

    return 0; 
}