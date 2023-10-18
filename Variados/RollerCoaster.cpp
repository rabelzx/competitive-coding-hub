#include <iostream>

using namespace std; 

int main() {
  int n, k, h, amigos = 0; 
  cin >> n >> k; 
  
  for(int i = 0; i < n; i++){
    cin >> h; 
    if(h >= k)
      amigos++; 
  }

  cout << amigos << endl; 
}