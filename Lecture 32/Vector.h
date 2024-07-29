

template<typename T>

class Vector {

	T *a;//This is pointer to dynamic Array
	int ts;
	int cs;//This can be treated as index.

public:

	Vector() {
		cs = 0;
		ts = 1;
		a = new T [ts];
	}

	Vector(int n) {
		cs = 0;
		ts = n;
		a = new T[n];
	}


	//Member Functions:
	void push_back(int data) {

		if (cs == ts) {
			//Vector is full: Double its size.

			T* b = a;
			a = new T[2 * ts];
			ts = ts * 2;

			//Copy all the elements of the array b in array
			//a.

			for (int i = 0; i < cs; i = i + 1) {
				a[i] = b[i];
			}

			delete[]b;
		}

		a[cs] = data;
		cs = cs + 1;
	}


	int size() {
		return cs;
	}

	int capacity() {
		return ts;
	}

	void pop_back() {
		cs = cs - 1;
	}

	T front() {
		return a[0];
	}

	T back() {
		return a[cs - 1];
	}

	T operator[](int index) {
		return a[index];
	}

	// a.operator[](index)
	//a[index]:

};














