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
    // Ne rien faire si la liste est vide
    if (scoreList.size() == 0)
        return 0;
    
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
    // Ne rien faire si la liste est vide
    if (scoreList.size() == 0)
        return 0;

    float median;
    int scoreCount;
    float middle;

    scoreCount = scoreList.size();
    middle = (float)scoreCount / 2;
    sortScore();

    if (scoreCount % 2 == 1) {
        median = scoreList[middle];
    } else {
        float val_1 = scoreList[middle-0.5];
        float val_2 = scoreList[middle+0.5];
        median = (val_1 + val_2) / 2;
    }
    
    return median;
}


float Student::getBestScore() {
    // Ne rien faire si la liste est vide
    if (scoreList.size() == 0)
        return 0;

    float bestScore;

    bestScore = *std::max_element(
        std::begin(scoreList),
        std::end(scoreList)
    );

    return bestScore;
}


float Student::getWorstScore() {
    // Ne rien faire si la liste est vide
    if (scoreList.size() == 0)
        return 0;

    float worstScore;

    worstScore = * std::min_element(
        std::begin(scoreList),
        std::end(scoreList)
    );

    return worstScore;
}


std::vector<float> Student::sortScore() {
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
