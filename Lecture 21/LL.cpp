#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

class node {
	//Define ek block ka design
public:

	int data;

	//Address store karna hain
	node *next;

	//Constructor
	//You should never leave a pointer uninitialised

	node(int inputdata) {
		data = inputdata;
		next = NULL;
	}
};


void InsertAtHead(node* head, int value) {
//value ko head ke piche insert karo and new head ab vo block hain
	//jisme "value" hain.

	node* n = new node(value);

	//Ye ek dynamic node banaya
	//and usko initialise kiya value se.
	//ek node ban gaya jisme data=value and next=NULL.


	// (*n).next = head;
	n->next = head;
	head = n;
}

void Print(node* head) {

	while (head != NULL) {//condition

		cout << head->data << "->";//task
		head = head->next;//i++;
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	node* head = NULL;//aapne ek head name ka node banaya isme data is
	//NULL and pointer is pointing to NULL;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print(head);
}