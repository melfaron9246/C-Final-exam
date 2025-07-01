#include "Exam.h"

//default constructor
Exam::Exam() : name(""), score(0.0) {}

//consptructor with paramters
Exam::Exam(string name, double score) : name(name), score(score) {}

//set name
void Exam::setName(string name) {
    this->name = name;
}

//get name
string Exam::getName() const {
    return name;
}

//set score
void Exam::setScore(double score) {
    this->score = score;
}

//getscore
double Exam::getScore() const {
    return score;
}
