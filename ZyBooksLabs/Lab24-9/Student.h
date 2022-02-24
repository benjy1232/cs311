#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
using namespace std;

class Student
{

  public:
    Student();
    void SetName(string n);
    void SetGPA(double num);
    string GetName() const;
    double GetGPA() const;
    // FIXME: Declare 3 more functions

  private:
    // FIXME: Add 2 private data members
    string _name;
    double _gpa;
};

#endif /* STUDENT_H_ */
