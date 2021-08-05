// polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Base class, Super class, Parent class
class Employee {
public:
    void amount() {
        cout << "\n The amount is : ";
    }

    /*void amount(int x, int y) {
        cout << "\n The calculated amount is : " << x * y;
    }*/
    void amount(float a, float b) {
        cout << "\n The calculated amount is : " << a * b;
    }
    void amount(string name, float x, float y) {
        cout << "\n The name is  : " << name;
        cout << "\n Total Income : " << x * y;
    }


};

//Derived class, Sub class, Child class
class Wage: public Employee {
private:
    float hours = 30;
    float rate = 20;
    float amt;

public:
    /*void amount() {
        amt = hours * rate;
        cout << "\n The amount is : " << amt;
    }*/
};

//Derived class, Sub class, Child class
class Salary : public Employee {
private:
    float gross = 2000;
    float tax = 400;
    float net;

public:
    void amount() {
        net = gross - tax;
        cout << "\n The amount is : " << net;
    }
};

int main()
{
    Employee e; //e is an object declared as Employee class
    Wage w;
    Salary s;

    e.amount();
    w.amount(); //Function is commented out so will inherit from parent class Employee
    w.amount("David", 21.5, 40.5); //Parameters with string called
    //s.amount();
    //e.amount(20, 40);
    //e.amount("David", 21.5, 40.5); //calling amount method with 2 parameters from Employee class
    //e.amount(21.5, 40.5);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

