#include <iostream>

int modularExponentiation(int base, int power, int modulus) {
    long long result = 1;
    long long x = base % modulus;

    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * x) % modulus;
        }
        x = (x * x) % modulus;
        power = power / 2;
    }

    return (int)result;
}

int main() {
    int B, P, M;
    
    while (std::cin >> B) {
        std::cin >> P;
        std::cin >> M;
        
        int result = modularExponentiation(B, P, M);
        std::cout << result << std::endl;
    }
    
    return 0;
}
