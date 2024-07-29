#include<iostream>
#include<cstring>
using  namespace std;

/*
	Classes ke pass 4 functions that are self invoked.

	1. Constructor
	2. Copy Constructor
	3. Copy Assignment
	4. Destructor


	4. Destructor
*/


class Car {
private:
	int price = 100000;

public:
	char name[100];
	string company;
	int model;
	string color = "White";
	//char* engine;

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
	Car(char* n, string s, int m, string c, int price, char *e) {
		cout << "Inside My Own Parameterised Constructor 1" << endl;
		strcpy(name, n);
		company = s;
		model = m;
		color = c;
		set_price2(price);
		engine = new char[strlen(e) + 1];
		strcpy(engine, e);
	}

	Car(char* n, string s, int m, int p, char* e) {
		cout << "Inside My Own Parameterised Constructor 2" << endl;
		strcpy(name, n);
		company = s;
		model = m;
		set_price2(p);
		engine = new char[strlen(e) + 1];
		strcpy(engine, e);
	}


	//2. Copy Constructor

	Car(Car &c) {
		cout << "Inside My Own Copy Constructor" << endl;
		strcpy(name, c.name);
		company = c.company;
		model = c.model;
		color = c.color;
		set_price2(c.price);

		//Deep Copy
		engine = new char[strlen(c.engine) + 1];
		strcpy(engine, c.engine);
	}


	//Operator Overloading
	//My own Copy assignment Operator.

	void operator=(Car &c) {

		cout << "Inside My Own Copy Assignment Operator" << endl;
		strcpy(name, c.name);
		company = c.company;
		model = c.model;
		color = c.color;
		set_price2(c.price);

		//Deep Copy
		engine = new char[strlen(c.engine) + 1];
		strcpy(engine, c.engine);
	}

	// a = c;
	// a.operator = (c);

	void Print() {
		cout << name << endl;
		cout << company << endl;
		cout << model << endl;
		cout << price << endl;
		cout << color << endl;
		cout << engine << endl;
	}


	//Destructor
	// ~Car() {
	// 	if (engine != NULL) {
	// 		delete []engine;
	// 	}
	// }
};




int main() {


	Car d;
	char ch[100];
	cin >> ch;

	Car c(ch, "Tata", 110, "Black", 74500, "V8");
	Car e(ch, "Tata1", 120, 15, "V8");
	Car g(c);

	Car f;
	//Here my = sign  is overloaded and is termed as
	//copy assignment operator
	//Shallow Copy
	//f = c;
	f.operator = (c);
	f.Print();


	//Static Variable
	int x = 100;

	//Dynamic Variable
	int* y = new int(10);
	delete y;

	cout << *y << endl;

	//Dynamic Array
	int *ptr = new int[10];
	delete []ptr;


	//Dynamic Object
	Car *Mayank = new Car(ch, "Tata", 110, "Black", 74500, "V8");
	delete Mayank;

}













