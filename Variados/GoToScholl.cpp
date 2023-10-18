#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ordem(n + 1);

  for (int i = 1; i <= n; i++) {
    int position;
    cin >> position;

    ordem[position] = i;
  }

  for (int i = 1; i <= n; i++) {
    cout << ordem[i] << ' ';
  }

  return 0; 
}
