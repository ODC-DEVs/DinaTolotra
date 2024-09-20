#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <vector>
#include <algorithm>


class Student {
private:
    std::string name;
    std::string firstName;
    int registrationNumber;
    std::vector<float> scoreList;

public:
    Student(std::string name, std::string firstName, int registrationNumber);

    void addScore(float score);

    float calculateAverage();
    float calculateMedian();

    float getBestScore();
    float getWorstScore();

    std::vector<float> sortNote();

    bool isAccepted();
};



#endif // STUDENT_HPP