#include<iostream>
#include<cstring>
using  namespace std;


//Design of  your Data Type.
class Car {

	/*
		Access Modifiers:
		 1. Public:
		 2. Protected:
		 3. Private:

		By Default Every Data Member and
		Member Function is Private.

		Private: You are not allowed to use this
		DM or MF outside the class.

		Public: You are allowed to use this
		DM or MF outside the class.
	*/

	//Data Members:

private:
	int price = 100000;

public:
	char name[100];
	string company;
	int model;
	string color;


	//Member Functions:
	void Print() {
		cout << name << endl;
		cout << company << endl;
		cout << model << endl;
		cout << price << endl;
		cout << color << endl;
	}

};




int main() {


	int x;
	// int

	//Objects: (variables)
	Car c;

	cout << sizeof(int) << endl;
	cout << sizeof(Car) << endl;

	cout << sizeof(c) << endl;

	//My Actual Car is c.
	//. : Dot Operator iske through aap data member
	//ko access kar sakte ho.

	// c.price = 100;

	char ch[100];
	cin >> ch;
	strcpy(c.name, ch);

	c.company = "Tata";
	c.model = 110;
	c.color = "Black";

	c.Print();

	// cout << c.price << endl;




}