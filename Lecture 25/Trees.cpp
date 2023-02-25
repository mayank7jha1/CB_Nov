#include<bits/stdc++.h>
using  namespace std;


//Structure for a node of a tree.

class node {
public:
	int data;
	node* left;
	node* right;

	node(int inputdata) {
		data = inputdata;
		left = NULL;
		right = NULL;
	}
};

node* buildtree() {

	int x;
	cin >> x;

	if (x == -1) {
		//User keh raha hain iske aage kuch nahi hain.
		return NULL;
	} else {

		node* root = new node(x);//aapne constructor ko call kiya hain.
		root->left = buildtree();
		root->right = buildtree();
		return root;
	}
}


void preorder(node* root) {


	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}


void inorder(node* root) {


	if (root == NULL) {
		return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}


void postorder(node* root) {


	if (root == NULL) {
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}


int height(node* root) {


	if (root == NULL) {
		return 0;
	}

	int left_subtree = height(root->left);
	int right_subtree = height(root->right);

	int ans = max(left_subtree, right_subtree) + 1;

	return ans;
}

//Total no of nodes :

int countnodes(node* root) {


	if (root == NULL) {
		return 0;
	}

	int left_subtree = countnodes(root->left);
	int right_subtree = countnodes(root->right);

	int ans = left_subtree + right_subtree + 1;
	return ans;
}

//Sum of the nodes?

int sumofnodes(node* root) {
	if (root == NULL) {
		return 0;
	}

	int right_subtree = sumofnodes(root->right);
	int left_subtree = sumofnodes(root->left);

	int ans = left_subtree + right_subtree + root->data;
	return ans;
}


int diameter(node* root) {
	if (root == NULL) {
		return 0;
	}


	int op1 = diameter(root->left);
	int op2 = diameter(root->right);
	int op3 = height(root->left) + height(root->right);

	//return max(op3, max(op1, op2));

	return max({op3, op1, op2});
}


//Time Complexity : n*n

//For Every node you are calculating  the  height and height O(n).

//Diameter O(n):

//Dp on trees

//Method Use:
//Imp Height alag se:

//Doubts: Pending Binary Seach: Best problems:
//Quicksort and rrand srand
//stres test case:/

//Cycle vala theoram
//Diameter in O(n) and Height balanced tree.

int main() {
	//You should always have reference of the root nnode in case
	// of trees.

	node* root = buildtree();


	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;

	cout << height(root) << endl;
	cout << countnodes(root);
	cout << endl;
	cout << sumofnodes(root) << endl;
	cout << diameter(root) << endl;

}


//Time COmplexity: Har node parr jaarahe ho and koi kaam kar rahe ho
//max and min climits



//Imp Concepts: LCA,Ancestor,BFS,View and Input Method,Mirror
//Leetcode Questions:

//BST : Binary Search Trees and Principle: Questions:
//How to print different levels
//level order input:

//Tree frrom different Traversals combined
//Leetcode

//Stack and Queues//PQ
//Hashing
//String matching algo and segmented siev
//number theory and math
//bitmasking
//Dp:


//graph
//tries



//segmentted trees and fenwick trees/bit
//


//concept qps: TA: But questions:



























