#include <iostream>
#include <iomanip>
#include "Overall.h"

using namespace std;

int main() {

    //ask for student ID
    string studentID;
    cout << "Enter student ID: ";
    cin >> studentID;
    Overall student(studentID);

    string name;
    double score;
    char more = 'y';
    bool full = false;


    //fill in exam score and name
    int examsEntered = 0;

    while (more == 'y' && examsEntered < 5) {
        cout << "Enter exam name: ";
        cin >> name;
        cout << "Enter exam score: ";
        cin >> score;

        Exam exam(name, score);
        if (student.CreateObj(exam)) {
            examsEntered++;
            if (examsEntered < 5) {
                cout << "Add another exam? (y/n): ";
                cin >> more;
            }
        }
        else {
            cout << "Maximum number of exams (5) reached.\n";
            break;
        }
    }

    //display average
    double avg = student.DisplayAverage();
    cout << fixed << setprecision(2);
    cout << "Average score: " << avg << endl;

    return 0;
}
