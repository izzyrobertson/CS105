// employeeClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//class Employee {
//protected:
//    int id = 123;
//    string name = "Bob";
//
//public:
//    void getData() {
//        cout << "\nPlease enter the ID : ";
//        cin >> id;
//        cout << "\nPlease enter the name : ";
//        cin >> name;
//    }
//};
//
//class Wages : private Employee {
//private:
//    float hoursWorked;
//    float ratePerHour;
//
//public:
//    void calcWages() {
//        getData();
//        cout << "\nPlease enter the hours worked : ";
//        cin >> hoursWorked;
//        cout << "\nPlease enter the rate per hour : ";
//        cin >> ratePerHour;
//        cout << "\n\n\t ID : " << id;
//        cout << "\n\t Name : " << name;
//        cout << "\n\t Wage : " << hoursWorked * ratePerHour;
//    }
//};
//
//class Salary : private Employee {
//private:
//    float grossPay;
//    float taxrate;
//    float netPay;
//
//
//public:
//    void calculations() {
//        taxrate = grossPay * 0.15;
//        netPay = grossPay - taxrate;
//    }
//    void calcSalary(){
//        calculations();
//        getData();
//        cout << "Enter gross pay : ";
//        cin >> grossPay;
//        cout << "\nID    : " << id;
//        cout << "\nName  : " << name;
//        cout << "\nGross : " << grossPay;
//        cout << "\nTax   : " << taxrate;
//        cout << "\nNet   : " << netPay;
//    }
//};

class Animal {
private:
    int id;
    string name;
    string breed;
    int age;

public:
    void getData() {
        cout << "\n Enter the id    : ";
        cin >> id;
        cout << "\n Enter the name  : ";
        cin >> name;
        cout << "\n Enter the breed : ";
        cin >> breed;
        cout << "\n Enter the age   : ";
        cin >> age;
    }
};

class Dog : private Animal {
private:
    int lifeSpan;
    string experience;
    string diet;

public:
    void getDog() {
        cout << "\n Enter the life span of the dog  : ";
        cin >> lifeSpan;
        cout << "\n Enter the experience of the dog : ";
        cin >> experience;
        cout << "\n Enter the diet of the dog       : ";
        cin >> diet;
    }
};

class Cat : private Animal {
private:
    int lifeSpan;
    string whisker;
    string behaviour;

public:
    void getCat() {

    }
};

int main()
{
    /*Employee e;
    Wages w;
    Salary s;

    w.calcWages();
    s.calcSalary();*/

    dog or cat propertys;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
