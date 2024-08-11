#include<iostream>
#include"../Lecture 35/Trees.h"
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

	cout << Diameter3(root).height << " " <<
	     Diameter3(root).diameter << endl;

	cout << IsHeightBalanced(root).height << " " <<
	     IsHeightBalanced(root).hb << endl;


	int b[] = {4, 1, 2, 3, 7, 9, 17, 6};
	int n = sizeof(b) / sizeof(int);

	//Create a Height Balanced Tree from this Array.

	node<int>*root2 = CreateHeightBalancedTree(b, 0, n - 1);

	Preorder(root2);
	cout << endl;
	cout << endl;
	int k;
	cin >> k;
	PrintKthLevel(root, k);
	cout << endl;

	PrintALLLevel(root);
	cout << endl;

	/*
		Preorder[]{7,8,3,4,14,6,18};
		Inorder[]{3,8,4,7,6,14,18};
	*/

	int pre[] {7, 8, 3, 4, 14, 6, 18};
	int in[] {3, 8, 4, 7, 6, 14, 18};
	int n1 = 7;

	node<int>*root3 = CreatefromPreandIn(pre, in, 0, n1 - 1);
	Preorder(root3);
	cout << endl << endl;
	Inorder(root3);
	cout << endl;

}
























