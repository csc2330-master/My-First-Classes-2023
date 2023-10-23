//
// Created by Carlos R. Arias on 10/23/23.
//

#ifndef MY_FIRST_CLASSES_2023_STUDENT_H
#define MY_FIRST_CLASSES_2023_STUDENT_H

#include <string>
#include <iostream>
using std::string;
using std::istream;
using std::ostream;

class Student{
private:
    string _name;
    string _major;
    double _gpa;
    unsigned int _credits;
public:
    Student(const string& name, const string& major);
    Student(const string& name, const string& major, double gpa, unsigned int credits);
    string ToString()const;
    void Write(ostream& output)const;
    void Read(istream& input);
    void AddGrade(double grade, unsigned int credits);
    bool Equals(const Student& student)const;
    int CompareTo(const Student& student)const;
};

#endif //MY_FIRST_CLASSES_2023_STUDENT_H
