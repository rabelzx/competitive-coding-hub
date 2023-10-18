#include <iostream>
using namespace std; 

int main() {
    int N;
    cin >> N;

    if (N % 2 == 0) {
        double probability = 0.5;
        cout << probability << endl;
    } else {
        double probability = static_cast<double>((N + 1) / 2) / N;
        cout << probability << endl;
    }

    return 0;
}
