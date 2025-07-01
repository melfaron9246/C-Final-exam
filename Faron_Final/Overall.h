
#include "Exam.h"
#include <string>

using namespace std;;

//create class
class Overall {

//create functions
public:
    Overall(string id);
    bool CreateObj(Exam exam);
    double DisplayAverage() const;


//create variables
private:
    string id;
    int count;
    Exam examArray[5];
};
