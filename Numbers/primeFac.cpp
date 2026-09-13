
#include <iostream>
#include <vector>

int main () {

    int num {};
    std::cout << "Enter a number: ";
    std::cin >> num;

    std:: vector<int> res;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) res.push_back(i);
    }

    for (int n : res) {
        std::cout << n << '\n';
    }


    return 0;
}