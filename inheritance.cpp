// inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//1. private member is not accessible anywhere else other than the same class
//2. public member is accessible in other classes including main function\
//3. public class is accessible by inherited classes
//4. protected members are accessible by same class and inherited classes

//Parent class
class Parent {
private:
    int a;

protected:
    int x=10;

public:
    void getDetails() {

    }
};

class Child: public Parent{
private:
    int b;

public:
    void outDetails() {
        getDetails();
        //a = 20; //can only access when a in Parent class is set to protected
        x; //can be accessed as in Parent class x is set as protected
    }
};

class Grandchild : public Child {
private:
    int d;

public:
    void sumfunction() {
        cout << "x = " << x;
    }
};
int main()
{
    Parent p; //p is the object of class Parent
    Child c;
    Grandchild g;
    //p.a = 10; //cannot access private  member of the class
    p.getDetails();//can access public member of the class

    //c.a = 5; //cannot access the private member of the parent class
    c.getDetails();//cannot access the private class's public member, it can access the public class's public member

    //g.d = 20;
    g.outDetails();//can access the outDetails() of the Child class which is the parent for Grandchild
    g.getDetails();//can access the getDetails() of the Parent class which is the grand parent for Grandchild

    //p.outDetails();//cannot access the getDetails() of the Child class from Parent 
    //p.sumfunction();//cannot access the sumfunction() of the Grandchild class from Parent
    //p.a = 20;//cannot access because p.a is private
    g.sumfunction();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu



