#include "Overall.h"
#include <iostream>
using namespace std;

//constructor
Overall::Overall(string id) : id(id), count(0) {}


bool Overall::CreateObj(Exam exam) {
    if (count >= 5) return false;  // Can't add more
    examArray[count] = exam;
    count++;
    return true; // Successfully added
}

//function to display average
double Overall::DisplayAverage() const {
    if (count == 0) return 0.0;
    double sum = 0.0;
    for (int i = 0; i < count; ++i) {
        sum += examArray[i].getScore();
    }
    return sum / count;
}