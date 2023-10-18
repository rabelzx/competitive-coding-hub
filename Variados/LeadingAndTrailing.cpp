#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int T;
    std::cin >> T;

    while (T > 0) {
        int n, k;
        std::cin >> n >> k;

        long long result = std::pow(n, k);

        int first_three = result / std::pow(10, std::floor(std::log10(result)) - 2);
        int last_three = result % 1000;

        std::cout << std::setfill('0') << std::setw(3) << first_three << "..." << std::setw(3) << last_three << std::endl;

        T--;
    }

    return 0;
}
