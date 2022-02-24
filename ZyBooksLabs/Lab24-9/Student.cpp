// Simple class to hold student information
#include "Student.h"

#include <iostream>
#include <string>

using namespace std;

Student::Student()
{
    _name = "Louie";
    _gpa = 1;
}

void Student::SetName(string n)
{
    _name = n;
}
void Student::SetGPA(double gpa)
{
    _gpa = gpa;
}

string Student::GetName() const
{
    return _name;
}
double Student::GetGPA() const
{
    return _gpa;
}

// FIXME: Add 3 more functions
