// exampleClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Defiing class
class Animal {
//access specifier - public can be accessed outside the class
private:
//data members
    string animalType;
    string category;

public:
//member function
    void inputDetails() {
        cout << "Enter the animal type : ";
        cin >> animalType;
        cout << "Enter the animal category : ";
        cin >> category;
    }
    void displayDetails() {
        cout << "\nThe animal type is : " << animalType << endl;
        cout << "The category type is : " << category << endl;
    }
};

int main()
{
    Animal animalObj, dogObj; //animalObj is the instance of class Animal
    //animalObj.animalType = "Wild"; //assigning value to data member Animal
    //animalObj.category = "Carnivore"; //assigning value to data member Animal
    animalObj.inputDetails();
    animalObj.displayDetails(); //calling member function of class Animal

    //dog object details
    dogObj.inputDetails();
    dogObj.displayDetails();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

