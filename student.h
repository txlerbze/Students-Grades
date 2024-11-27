#include <string>
#include <vector>

using namespace std;

class Students {
public:
    Students(string studentFirstName, string studentLastName);
    void addGrade(double grade);
    double calculateAverage();
    void printDetails();

private:
    string FName;
    string LName;
    vector<double> grades;
};
