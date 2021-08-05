#include <iostream>
using namespace std;

class Student {
protected:
	string name;
public:
	static int id;
	Student(string n = "") { //constructor
		name = n;
	}

public:
	void getIdName() {
		cout << "\n\nEnter the name : ";
		cin >> name;
	}

	void getMarks(float sem1, float sem2) {
		cout << "\nThe id is : " << id++; //static counter 
		cout << "\nThe name is :" << name;

		cout << "\nSemester1 mark : " << sem1;
		cout << "\nSemester2 mark : " << sem2;
	}
};

class SoftEng : public Student {
private:
	float lab1, lab2, lab3, lab4;

public:
	SoftEng(float la1 = 0, float la2 = 0, float la3 = 0, float la4 = 0) { //constructor
		lab1 = la1;
		lab2 = la2;
		lab3 = la3;
		lab4 = la4;
	}

	void getMarks(float l1, float l2, float l3, float l4) {
		cout << "\nEnter Lab1 mark: ";
		cin >> l1;
		lab1 = l1;

		cout << "\nEnter Lab2 mark: ";
		cin >> l2;
		lab2 = l2;

		cout << "\nEnter Lab3 mark: ";
		cin >> l3;
		lab3 = l3;

		cout << "\nEnter Lab4 mark: ";
		cin >> l4;
		lab4 = l4;
	}

	void displayMarks() {
		cout << "\nThe id is : " << id++;
		cout << "\nThe name is : " << name;
		cout << "\nThe marks for lab1, lab2, lab3 and lab4 repectively : " << lab1 << " " << lab2 << " " << lab3 << " " << lab4;
	}

};

class WebUx : public Student {
private:
	float module1, module2, module3;

public:
	WebUx(float m1 = 0, float m2 = 0, float m3 = 0) {
		module1 = m1;
		module2 = m2;
		module3 = m3;
	}
	void getMarks(float m1, float m2, float m3) {
		cout << "\nEnter module1 mark: ";
		cin >> m1;
		cout << "\nEnter module2 mark: ";
		cin >> m2;
		cout << "\nEnter module3 mark: ";
		cin >> m3;

	}
};

int Student::id = 101; //static counter

int main() {
	Student s;
	SoftEng se;
	WebUx wux;

	//parent Student
	s.getIdName();
	s.getMarks(45, 60);
	s.getIdName();
	s.getMarks(80, 90);

	//child SoftwareEngineering
	se.getIdName();
	se.getMarks(50, 70, 45, 67);
	se.displayMarks();

	//child Web Ux
	se.getIdName();
	se.getMarks(68, 75, 96, 77);
	se.displayMarks();

	cout << "\n\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
