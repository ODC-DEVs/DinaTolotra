#include <iostream>
#include "Student.hpp"

using namespace std;

int main() {
    Student student("Dina", "Tolotra", 1234);
    student.addScore(1);
    student.addScore(2);
    student.addScore(3);

    std::cout << "Average: " << student.calculateAverage();
    std::cout << "Median: " << student.calculateMedian();

    return 0;
}