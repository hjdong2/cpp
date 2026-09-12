
#include <iostream>
#include <iomanip>
#include <limits>

int main() {
    int max_term {0};
    std::cout << "Enter a number: ";
    std::cin >> max_term;

    double sum = 1;
    double sm = 1;
    for (int i = 1; i < max_term; i++) {
        sm *= static_cast<double> (i) / (2 * i + 1);
        sum += sm;
    }

    std::cout << std::setprecision(12) << sum * 2 << '\n';

    return 0;
}