#include <bits/stdc++.h>
using namespace std;

int distancia(pair<int, int> p1, pair<int, int> p2){
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

int main(){
    int t; 
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n; 

        vector<int> numbers(2 * n);
        for(int i = 0; i < 2 * n; i++){
            cin >> numbers[i];
        } 

        sort(numbers.begin(), numbers.end());

        vector<pair<int, int>> pontos(n);
        for(int i = 0; i < n; i++){
            pontos[i] = make_pair(numbers[i], numbers[2 * n - i - 1]);
        }

        int distanciaTotal = 0;
        for(int i = 0; i < n - 1; i++){
            distanciaTotal += distancia(pontos[i], pontos[i + 1]);
        }

        cout << distanciaTotal << endl;

        for(int i = 0; i < n; i++){
            cout << pontos[i].first << " " << pontos[i].second << endl;
        }

    }

}