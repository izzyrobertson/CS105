// constructorClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

//class Student
class Student {
    //access specifier
private:
    int id;
    string name;
    int grade1;
    int grade2;
    int avrg;

public:
    //default constructor has no parameters
    Student(int i = 101, string n = "Izzy", int g1 = 0, int g2 = 0) {
        id = i;
        name = n;
        grade1 = g1;
        grade2 = g2;
    }

    //member function
    void inputStudent() {
            cout << "\nEnter the student id : ";
            cin >> id;
            cout << "\nEnter the student name : ";
            cin >> name;
            cout << "\nEnter the lab 1 results : ";
            cin >> grade1;
            cout << "\nEnter the lab 2 results : ";
            cin >> grade2;
    }

    void average() {
        avrg = ((grade1 + grade2) / 2);
    }

    void outputStudent() {
        cout << "\n\tStudent ID    : " << id;
        cout << "\n\tStudent Name  : " << name;
        cout << "\n\tLab 1 Grade   : " << grade1 << " %";
        cout << "\n\tLab 2 Grade   : " << grade2 << " %";
        cout << "\n\tAverage Grade : " << avrg << " %";
    }

    void test() {
        if (grade1 >= 50) {
            cout << "\tLab 1 result  : Pass";
        } else {
            cout << "\n\tLab 1 result  : Fail";
        } 
        if (grade2 >= 50) {
            cout << "\n\tLab 2 result  : Pass";
        }
        else {
            cout << "\n\tLab 2 result  : Fail\n" << endl;
        }
    }
};
int main()
{
    Student studentObj; //student object studentObj is of Student class
    /*studentObj.id = 101;
    studentObj.name = "Izzy";
    cout << studentObj.id << endl;
    cout << studentObj.name;*/
    /*Student s1(111, "Tony");
    s1.outputStudent();
    Student s2(222, "John");
    s2.outputStudent();*/
    Student s;
    for (int i = 0; i < 3; i++) {
        s.inputStudent();
        s.average();
        s.outputStudent();
        s.test();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

