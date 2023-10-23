#include <iostream>
#include "student.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

    Student a("Joan", "Physics");
    Student b("Annie", "Pre-Med", 3.99, 120);
    Student c("Joan", "Physics");

    cout << a.ToString() << endl;
    cout << b.ToString() << endl;

    if (a.Equals(b)){
        a.Write(cout);
        cout << " equals to ";
        b.Write(cout);
        cout << endl;
    }else{
        a.Write(cout);
        cout << " NOT equals to ";
        b.Write(cout);
        cout << endl;

    }
    if (a.Equals(c)){
        a.Write(cout);
        cout << " equals to ";
        c.Write(cout);
        cout << endl;
    }else{
        a.Write(cout);
        cout << " NOT equals to ";
        c.Write(cout);
        cout << endl;

    }
    cout << endl << endl;
    a.AddGrade(3.5, 5);
    cout << a.ToString() << endl;
    a.AddGrade(4.0, 3);
    cout << a.ToString() << endl;
    a.AddGrade(1.5, 5);
    cout << a.ToString() << endl;


    Student array[5];



    return 0;
}


