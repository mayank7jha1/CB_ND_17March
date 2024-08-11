

template<typename T>
class node {
public:
	T data;
	node<T>* left;
	node<T>* right;

	node() {

	}

	node(T inputdata) {
		left = NULL;
		right = NULL;
		data = inputdata;
	}
};