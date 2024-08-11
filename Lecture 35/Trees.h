#include<iostream>
#include"Node.h"
#include<algorithm>
using  namespace std;


node<int>* buildtree() {

	int x;
	cin >> x;

	if (x == -1) {
		return NULL;
	} else {

		node<int>*r = new node(x);
		r->left = buildtree();
		r->right = buildtree();

		return r;
	}

}


void Preorder(node<int>*root) {


	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);
}


void Inorder(node<int>*root) {


	if (root == NULL) {
		return;
	}

	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}


void Postorder(node<int>*root) {


	if (root == NULL) {
		return;
	}

	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}


int CountNodes(node<int>*root) {

	if (root == NULL) {
		return 0;
	}


	int LSH = CountNodes(root->left);
	int RSH = CountNodes(root->right);

	int ans = LSH + RSH + 1;
	return ans;
}

int SumofNodes(node<int>*root) {

	if (root == NULL) {
		return 0;
	}


	int LSH = SumofNodes(root->left);
	int RSH = SumofNodes(root->right);

	int ans = LSH + RSH + root->data;
	return ans;

}

//n Computation
int Height(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LSH = Height(root->left);
	int RSH = Height(root->right);

	return max(LSH, RSH) + 1;
}

void LeftView(node<int>*root, int level, int &Maxlevel) {

	if (root == NULL) {
		return;
	}

	if (level > Maxlevel) {
		cout << root->data << " ";
		Maxlevel = level;
	}

	LeftView(root->left, level + 1, Maxlevel);
	LeftView(root->right, level + 1, Maxlevel);
}


void RightView(node<int>*root, int level, int &Maxlevel) {

	if (root == NULL) {
		return;
	}

	if (level > Maxlevel) {
		cout << root->data << " ";
		Maxlevel = level;
	}

	RightView(root->right, level + 1, Maxlevel);
	RightView(root->left, level + 1, Maxlevel);
}


void Mirror(node<int>*root) {

	if (root == NULL) {
		return;
	}

	swap(root->left, root->right);

	Mirror(root->left);
	Mirror(root->right);

}



int maxi = 0;
//Diameter of a Tree:
//n -> Computation
int Diameter(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LSH = Diameter(root->left);
	//It is returning the height of the left subtree

	int RSH = Diameter(root->right);
	//It is returning the height of the right subtree


	maxi = max(maxi, LSH + RSH);

	int Height = max(LSH, RSH) + 1;
	return Height;
}


//n*n --> Computation (Slow)
int Diameter2(node<int>*root) {

	if (root == NULL) {
		return 0;
	}


	//Diameter lies in left subtree.
	int LSTD = Diameter2(root->left);

	//Diameter lies in  right subtree.
	int RSTD = Diameter2(root->right);

	//Diameter pass through the root node.
	int Op3 = Height(root->left) + Height(root->right);

	return max({LSTD, RSTD, Op3});
}

class Pair1 {
public:
	int height;
	int diameter;

	Pair1() {
		height = 0;
		diameter = 0;
	}
};


//n-->computation
Pair1 Diameter3(node<int>*root) {

	Pair1 p;

	if (root == NULL) {
		p.height = 0;
		p.diameter = 0;
		return p;
	}

	Pair1 LST = Diameter3(root->left);

	Pair1 RST = Diameter3(root->right);

	int Op1 = LST.diameter;
	int Op2 = RST.diameter;

	int Op3 = LST.height + RST.height;

	p.diameter = max({Op1, Op2, Op3});
	p.height = max(LST.height, RST.height) + 1;

	return p;

}





















