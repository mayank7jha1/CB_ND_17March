#include<iostream>
#include"Trees.h"
using  namespace std;


int main() {
	node<int>* root = buildtree();

	Preorder(root);
	cout << endl;
	Inorder(root);
	cout << endl;
	Postorder(root);
	cout << endl;

	cout << CountNodes(root) << endl;
	cout << SumofNodes(root) << endl;

	int maxlevel = -1;
	LeftView(root, 0, maxlevel);
	cout << endl;

	maxlevel = -1;
	RightView(root, 0, maxlevel);
	cout << endl;

	Mirror(root);
	Preorder(root);
	cout << endl;

	int ans = Diameter(root);
	cout << ans << endl;
	cout << maxi << endl;

	cout << Diameter3(root).height << " " << Diameter3(root).diameter << endl;
}


