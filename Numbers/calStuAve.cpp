
#include <iostream>

char gradeFun(double avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    int count;
    double sum = 0, grade = 0;

    std::cout << "How many grades ? ";
    std::cin>> count;

    for (int i = 1; i <= count; i++) {
        std::cout << "Enter grade " << i << ": ";
        std::cin >> grade;
        sum += grade;
    }

    double avg = sum / count;

    std::cout << "Average: " << avg << '\n';
    std::cout << "Letter grade: " << gradeFun(avg) << '\n';


    return 0;
}