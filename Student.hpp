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

    /**
     * @brief Insérer un note dans le liste de note
     * @param score: Le note à insérer dans le liste
     */
    void addScore(float score);

    /**
     * @brief Calculer la moyenne des notes enregistrées
     * @return La moyenne calculer
     */
    float calculateAverage();
    /**
     * @brief Calculer le médiane du liste de note
     * @return Le médiane du liste de note
     */
    float calculateMedian();

    /**
     * @brief Obtenir le meilleur note de l'etudiant
     * @return Le meilleur note enregistrée de l'etudiant
     */
    float getBestScore();
    /**
     * @brief Obtenir le pire note de l'etudiant
     * @return Le pire note enregistrée de l'etudiant
     */
    float getWorstScore();

    /**
     * @brief Trie les note enregistrée de manière croissante
     * @return Le liste de note trié
     */
    std::vector<float> sortScore();

    /**
     * @brief Verifie si l'étudiant est admis ou non
     * @return True si l'étudiant est admis, False sinon
     */
    bool isAccepted();
};



#endif // STUDENT_HPP