#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <utility>
#include <bits/stdc++.h>

using namespace std;

void generateCombinations(const vector<int>& indices, vector<pair<int, int>>& combinations) {
    int n = indices.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            combinations.push_back(make_pair(indices[i], indices[j]));
        }
    }
}

void findRepeatingElementsAndCombinations(const vector<int>& arr) {
    unordered_map<int, vector<int>> elementToIndices;
    int n = arr.size();

    // Passo 1: Identifique elementos repetidos e seus índices
    for (int i = 0; i < n; i++) {
        elementToIndices[arr[i]].push_back(i);
    }

    vector<pair<int, int>> allCombinations;

    // Passo 2: Gere todas as combinações de índices para elementos repetidos
    for (const auto& pair : elementToIndices) {
        int element = pair.first;
        const vector<int>& indices = pair.second;

       
        if (indices.size() >= 2) {
            generateCombinations(indices, allCombinations);
        }
    }

    vector<int> B(n , 1); 
    bool condicao1 = false; 
    bool condicao2 = false;
    bool condicao3 = false;

    for(int i = 0; i < allCombinations.size(); i++) {
        
    }

}

int main() {
  
        int n; 
        cin >> n; 

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        findRepeatingElementsAndCombinations(arr);
   

    return 0;
}
