
#include <string>

using namespace std;

//create class
class Exam {

//create functions
public:
    Exam();
    Exam(string name, double score);
    void setName(string name);
    string getName() const;
    void setScore(double score);
    double getScore() const;

//create variables
private:
    string name;
    double score;
};



