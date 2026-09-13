
#include <iostream>
#include <vector>

int main() {
    int num {0};
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::vector<int> res(num);
    res[0] = 0;
    res[1] = 1;
    for (int i = 2; i < num; i++) {
        int sum = res[i - 2] + res[i - 1];
        res[i] = sum;
    }
    for (int & n : res) {
        std::cout << n << '\n';
    }

    return 0;
}