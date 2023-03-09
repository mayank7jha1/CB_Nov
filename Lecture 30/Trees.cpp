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

vector<int>inorder1;
void inorder(node* root) {


	if (root == NULL) {
		return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
void inorder2(node* root) {


	if (root == NULL) {
		return;
	}

	inorder2(root->left);
	//cout << root->data << " ";
	inorder1.push_back(root->data);
	inorder2(root->right);
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


pair<int, int>p2;
//p2:: first=height and second diameter


pair<int, int> fastdiameter(node* root) {
	pair<int, int>p;

	if (root == NULL) {
		p.second = 0;
		p.first = 0;
		return p;
	}

	//Last node: yaha ki height ko and diameter ko calculate karo

	pair<int, int>left_subtree = fastdiameter(root->left);
	pair<int, int>right_subtree = fastdiameter(root->right);

	p.first = max(left_subtree.first, right_subtree.first) + 1;

	int op1 = left_subtree.second;
	int op2 = right_subtree.second;
	int op3 = left_subtree.first + right_subtree.first;

	p.second = max({op1, op2, op3});
	return p;
}

//O(n);


class pair3 {
public:
	int height;
	int diameter;
};

pair3  fastdiameter2(node* root) {
	pair3 p;

	if (root == NULL) {
		p.diameter = 0;
		p.height = 0;
		return p;
	}

	//Last node: yaha ki height ko and diameter ko calculate karo

	pair3 left_subtree = fastdiameter2(root->left);
	pair3 right_subtree = fastdiameter2(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;

	int op1 = left_subtree.diameter;
	int op2 = right_subtree.diameter;
	int op3 = left_subtree.height + right_subtree.height;

	p.diameter = max({op1, op2, op3});
	return p;
}


class pair4 {
public:
	int height;
	bool isbalanced;
};

pair4  isheightbalanced(node* root) {
	pair4 p;

	if (root == NULL) {
		p.isbalanced = true;
		p.height = 0;
		return p;
	}

	//Last node: yaha ki height ko and diameter ko calculate karo

	pair4 left_subtree = isheightbalanced(root->left);
	pair4 right_subtree = isheightbalanced(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;

	if (left_subtree.isbalanced == 1 and right_subtree.isbalanced == 1 and
	        abs(left_subtree.height - right_subtree.height) <= 1) {
		p.isbalanced = true;
	} else {
		p.isbalanced = false;
	}

	return p;
}
//array k bich ka index kaise nikalte ho?
//size 5: (0+5)/2;

node* buildTreefromArray(int *a, int s, int e) {

	if (s > e) {
		return NULL;
	}


	int mid = (s + e) / 2;
	node* root = new node(a[mid]);

	root->left = buildTreefromArray(a, s, mid - 1);
	root->right = buildTreefromArray(a, mid + 1, e);
	return root;
}


node* buildTreefrompreandin(int* in, int *pre, int s, int e) {
	if (s > e) {
		return NULL;
	}

	static int i = 0;//this statement will run only once.

	node* root = new node(pre[i]);

	//Dhundo is pre[index] ko in your inorder traversal
	//and agar aapko mil gaya toh usse pehle tak left and uske
	//baad right me daalna hain

	int index = -1;//inorder me konse index par pre[i] milega

	for (int j = s; j <= e; j++) {
		if (in[j] == pre[i]) {
			index = j;
			break;
		}
	}

	//Now you know inorder me konse index par you have found the
	//pre[i].
	i++;

	root->left = buildTreefrompreandin(in, pre, s, index - 1);
	root->right = buildTreefrompreandin(in, pre, index + 1, e);

	return root;
}




void mirror(node* root) {
	if (root == NULL) {
		return;
	}

	swap(root->left, root->right);//Address ko swap kar rahe ho

	mirror(root->left);//Maine root node me kardiya aap baadi left subtree me kardo
	mirror(root->right);
}


void printLeftView(node* root, int level, int &max_level) {

	if (root == NULL) {
		return;
	}

	if (max_level < level) {
		cout << root->data << " ";
		max_level = level;
	}

	printLeftView(root->left, level + 1, max_level);
	printLeftView(root->right, level + 1, max_level);
}

void printRightView(node* root, int level, int &max_level) {

	if (root == NULL) {
		return;
	}

	if (max_level < level) {
		cout << root->data << " ";
		max_level = level;
	}

	printRightView(root->right, level + 1, max_level);
	printRightView(root->left, level + 1, max_level);

}
//O(n)
void printkthlevel(node* root, int k) {
	if (root == NULL) {
		return;
	}

	if (k == 1) {
		//Kuch kaam karna hain
		cout << root->data << " ";
		return;
	}

	printkthlevel(root->left, k - 1);
	printkthlevel(root->right, k - 1);
}

//Time Complexity Kya hain?O(height*n);

int printALlLevels(node* root) {
	int H = height(root);//O(n)

	for (int i = 1; i <= H; i++) {//Height:
		printkthlevel(root, i);//O(n)
		cout << endl;
	}
}

node* InsertInBst(node* root, int x) {
	if (root == NULL) {
		root = new node(x);
		return root;
	}

	if (x < root->data) {
		//x will lie on the left side of the tree;

		root->left = InsertInBst(root->left, x);
	} else {
		//right side of the tree

		root->right = InsertInBst(root->right, x);
	}

	return root;
}

node* buildbst() {
	int x;
	cin >> x;
	node* root = NULL;
	while (x != -1) {
		root = InsertInBst(root, x);
		cin >> x;
	}
	return root;
}

bool searchinbst(node* root, int key) {

	if (root == NULL) {
		return false;//dusre side me toh check kiya nahi?
	}

	if (root->data == key) {
		return true;
	} else if (root->data < key) {
		return searchinbst(root->left, key);
	} else {
		return searchinbst(root->right, key);
	}
}

void printrange(node* root, int key1, int key2) {
	if (root == NULL) {
		return;
	}
	printrange(root->left, key1, key2);

	if (root->data >= key1 and root->data <= key2) {
		cout << root->data << " ";
	}

	// printrange(root->left, key1, key2);
	printrange(root->right, key1, key2);
}


bool isbst(node*root, int min = INT_MIN, int max = INT_MAX) {

	if (root == NULL) {
		return true;
	}


	if ((root->data) > min and (root->data) < max and
	        isbst(root->left, min, root->data) and
	        isbst(root->right, root->data, max)) {
		return true;
	}

	return false;
}

int main() {
	//You should always have reference of the root nnode in case
	// of trees.

	// node* root = buildtree();


	// preorder(root);
	// cout << endl << endl;;
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;

	// cout << height(root) << endl;
	// // cout << countnodes(root);
	// // cout << endl;
	// // cout << sumofnodes(root) << endl;
	// cout << diameter(root) << endl;
	// pair<int, int>p = fastdiameter(root);

	// cout << "Height of tree is " << p.first << endl;
	// cout << "Diameter of tree is " << p.second << endl;

	// pair3 p1 = fastdiameter2(root);

	// cout << p1.height << " " << p1.diameter << endl;

	// cout << isheightbalanced(root).height << endl;
	// cout << isheightbalanced(root).isbalanced << endl;

	// int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// node* root2 = buildTreefromArray(a, 0, 8);

	// preorder(root2);
	// cout << endl;
	// inorder(root2);

	// int pre[] = {5, 2, 1, 3, 4, 7, 6, 8, 9};
	// int in[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	// node* root3 = buildTreefrompreandin(in, pre, 0, 8);
	// int max_level = -1;
	// printLeftView(root, 0, max_level);
	// cout << endl;
	// int max_level2 = -1;
	//printRightView(root, 0, max_level2);
	// printkthlevel(root, 3);
	// cout << endl << endl;;
	// printALlLevels(root);
	node* root = buildbst();
	inorder(root);
	cout << endl;
	int key1, key2;
	pair<int, int> p = fastdiameter(root);
	cout << p.first << " " << p.second << endl;
	cout << countnodes(root) << endl;
	cout << sumofnodes(root) << endl;
	cout << endl;
	cin >> key1 >> key2;
	//O(n)
	inorder2(root);

	int y = upper_bound(inorder1.begin(), inorder1.end(), key2) - inorder1.begin();

	int x = lower_bound(inorder1.begin(), inorder1.end(), key1) - inorder1.begin();

	for (int i = x; i < y; i++) {
		cout << inorder1[i] << " ";
	}
	cout << endl;
	printrange(root, key1, key2);
}









//Range Query problem: O(log n): Segment Trees:O(logn)
//STL : Next: Maps and Sets and Stacks and Queues:

//Create maps and stacks and queues and Concepts and Questions
//Trees map and bfs and set questions.


//String matching and segment trees and math:
//DP:

//Tree: Level order traversal, Input and output:
//LCA
//Maps and Trees Questions:

//Top View reh gaya

















