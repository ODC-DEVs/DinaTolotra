#include "Student.hpp"
#include <algorithm>
#include <iterator>
#include <numeric>

Student::Student(std::string name, std::string firstName, int registrationNumber)
{
    this->name = name;
    this->firstName = firstName;
    this->registrationNumber = registrationNumber;
}


void Student::addScore(float score) {
    this->scoreList.push_back(score);
}


float Student::calculateAverage() {
    float avg, scoreSum;
    int scoreCount;

    scoreCount = this->scoreList.size();
    scoreSum = std::accumulate(
        std::begin(scoreList),
        std::end(scoreList),
        0
    );

    if (scoreCount == 0) return 0;

    avg = scoreSum / scoreSum;

    return avg;
}


float Student::calculateMedian() {
    float mediane;
    float scoreCount;

    scoreCount = scoreList.size();
    mediane = scoreCount / 2;

    return mediane;
}


float Student::getBestScore() {
    float bestScore;

    bestScore = *std::max_element(
        std::begin(scoreList),
        std::end(scoreList)
    );

    return bestScore;
}


float Student::getWorstScore() {
    float worstScore;

    worstScore = * std::min_element(
        std::begin(scoreList),
        std::end(scoreList)
    );

    return worstScore;
}


std::vector<float> Student::sortNote() {
    std::sort(
        std::begin(scoreList),
        std::end(scoreList)
    );

    return scoreList;
}


bool Student::isAccepted() {
    float avg = calculateAverage();
    return avg > 11.5;
}
