/*array.size() % 2 == 0 {
    numero de ocorrencias de x == numero de ocorrencias de y
}

4




array.size() % 2 == 1{
    numero de ocorrencias de x - numero de ocorrencias de y <= 1 ? true : false
}


4 5 4 5 4 5 4 5

4 4 4 4 5 5 5 5 ; 
4 + 5 = 9 ? 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t; 

    while(t--){
        int n; 
        cin >> n; 

        vector<int> numbers(n);
        set<int> uniqueNumbers; 

        for(int i = 0; i < n; i++){
            cin >> numbers[i];
            uniqueNumbers.insert(numbers[i]);
        }

        int uniqueNumbersSize = uniqueNumbers.size(); 

        //a quantidade de numeros unicos é menor ou igual a 2
        if(uniqueNumbersSize <= 2){
            int ok = 1;
            sort(numbers.begin(), numbers.end());
            int commonValue = numbers[numbers.size() - 1] - numbers[0];

            for(int i = 0, j = numbers.size() - 1; i < j; i++, j--){
                if(numbers[j] - numbers[i] != commonValue){
                    ok = 0;
                    break;
                }
            }

            if(ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else{
            cout << "NO" << endl;
        }
        
    }
    return 0; 
}