//
// Created by Carlos R. Arias on 10/23/23.
//

#include "student.h"

#include <string>
#include <iostream>
#include <sstream>
using std::string;
using std::istream;
using std::ostream;
using std::stringstream;

Student::Student(const string &name, const string &major):_name(name), _major(major), _gpa(0.0), _credits(0) {

}

Student::Student(const string &name, const string &major, double gpa, unsigned int credits) {
    _name = name;
    _major = major;
    _gpa = gpa;
    _credits = credits;
}

string Student::ToString() const {
    stringstream ss;
    ss << "Name: " << _name << " Major: " << _major << " Credits: " << _credits << " GPA: " << _gpa;
    return ss.str();
}

void Student::Write(ostream &output) const {
    output << _name << " " << _major << " " << _credits << " " << _gpa << " ";
}

void Student::Read(istream &input) {
    input >>  _name >> _major >> _credits >> _gpa;
}

void Student::AddGrade(double grade, unsigned int credits) {
    _gpa = ((_gpa * _credits) + (grade * credits)) / (_credits + credits);
    _credits += credits;
}

bool Student::Equals(const Student &student) const {
    return _name == student._name && _major == student._major;
}

int Student::CompareTo(const Student &student) const {
    return _name.compare(student._name);
}
