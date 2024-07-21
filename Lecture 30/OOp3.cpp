#include<iostream>
#include<cstring>
using  namespace std;

/*
	Classes ke pass 4 functions that are self invoked.

	1. Constructor
	2. Copy Constructor
	3. Copy Assignment
	4. Destructor


	1. Constructor:
*/


class Car {
private:
	int price = 100000;

public:
	char name[100];
	string company;
	int model;
	string color = "White";

	int get_price() {
		return price;
	}

	void set_price(double discount) {
		double updated_price = price * (1.0 - (discount / 100));

		if (updated_price < 50000) {
			price = 50000;
		} else {
			price = updated_price;
		}
	}

	void set_price2(int value) {
		if (value < 50000) {
			price = 50000;
		} else {
			price = value;
		}
	}


	//Constructor Overloading
	Car() {
		cout << "Inside My own Default Constructor" << endl;
	}

	//Parameterised Constructors
	Car(char* n, string s, int m, string c, int price) {
		cout << "Inside My Own Parameterised Constructor 1" << endl;
		strcpy(name, n);
		company = s;
		model = m;
		color = c;
		set_price2(price);
	}

	Car(char* n, string s, int m, int p) {
		cout << "Inside My Own Parameterised Constructor 2" << endl;
		strcpy(name, n);
		company = s;
		model = m;
		set_price2(p);
	}

	void Print() {
		cout << name << endl;
		cout << company << endl;
		cout << model << endl;
		cout << price << endl;
		cout << color << endl;
	}

};




int main() {


	Car d;


	char ch[100];
	cin >> ch;

	Car c(ch, "Tata", 110, "Black", 74500);
	Car e(ch, "Tata1", 120, 15);

	c.Print();

	cout << endl << endl << endl;
	e.Print();

}