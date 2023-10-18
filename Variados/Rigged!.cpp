#include <iostream>

using namespace std; 

int main() {
  int cases; 
  cin >> cases; 
  
  for (int i = 0; i < cases; i++) {
    int nAtletas; 
    cin >> nAtletas; 
    
    pair<int, int> polycarpStats, competitorStats; 
    cin >> polycarpStats.first >> polycarpStats.second;

    int weight = 0;
    
    for(int j = 0; j < nAtletas - 1; j++){
      cin >> competitorStats.first >> competitorStats.second; 
      if(competitorStats.first >= polycarpStats.first){
        if(competitorStats.second >= polycarpStats.second){
          weight = -1; 
          break;
      }
    }

    cout << weight << endl; 
  }
}