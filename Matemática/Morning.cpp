#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std; 

int main() {
    int t; 
    cin >> t; 

    for(int i = 0; i < t; i++){
        string line; 
        cin >> line; 

        int steps = 0, digit, previous = 1; 
        for(int i = 0; i < 4; i++){
            if(line[i] == '0'){
                digit = 10; 
            }else{
                digit = line[i] - '0';
            }

            //os passoas dependem do deslocamento do cursor de mais 4 clicks
            steps += abs(digit - previous) + 1;
            previous = digit;
        }

        cout << steps << endl; 
    }

    return 0; 
}