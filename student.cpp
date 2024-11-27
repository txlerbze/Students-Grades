#include "student.h"
#include <iostream>
#include <iomanip>

using namespace std;

Students::Students(string studentFirstName, string studentLastName) {
    firstName = studentFirstName;
    lastName = studentLastName;
}

void Students::addGrade(double grade) {
    grades.push_back(grade); 
}

double Students::calculateAverage() {
    if (grades.empty()) {
        return 0.0;
    }

    double sum = 0.0;
    for (double grade : grades) {
        sum += grade; 
    }

    return sum / grades.size(); 
}

void Students::printDetails() {
    cout << "Student Name: " << firstName << " " << lastName << endl;
    double average = calculateAverage();
    cout << "Average Grade: " << fixed << setprecision(2) << average << endl;
}
