// polymorphism student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    void getIdName (int id, string name) {

    }
    void getMarks(float sem1, float sem2) {

    }
};

class SoftwareEngineering {
private:
    int lab1, lab2, lab3, lab4;

public:
    void getMarks(int l1, int l2, int l3, int l4) {

    }
};

class WebUx {
private:
    int module1, module2, module3, module4;

public:
    void getMarks(int m1, int m2, int m3, int m4) {

    }
};

int main()
{
    string name;
    int id;

    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your id   : ";
    cin >> id;

    Student s;
    s.getIdName(id, name);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
