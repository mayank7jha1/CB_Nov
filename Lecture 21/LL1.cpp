#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

class node {
public:

	int data;
	node *next;
	node(int inputdata) {
		data = inputdata;
		next = NULL;
	}
};


void InsertAtHead(node* &head, int value) {

	node* n = new node(value);
	n->next = head;
	head = n;
}

//Iteration ka
void Print(node* &head) {
	//Space ko bacha rahe hain.
	node* temp = head;

	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}

	cout << "NULL" << endl;
}


int len(node* head) {
	int length = 0;
	node* temp = head;
	while (temp != NULL) {
		length++;
		temp = temp->next;
	}
	return length;
}

int midPoint(node* head) {
	int mid = len(head) / 2;

	node* temp = head;
	while (mid > 0) {
		temp = temp->next;
		mid--;
	}

	return temp->data;
}


node* midPoint1(node* head) {
	int mid = len(head) / 2;

	node* temp = head;
	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp;
}

//Single Iteration
int midPointfastfirst(node* head) {
	node* slow = head;
	node* fast = head;

	//fast!=NULL this condition is for even length ll
	//fast->next!=NULL this condition is for odd length ll

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->data;
}

int midPointfastsecond(node* head) {
	node* slow = head;
	node* fast = head->next;

	//fast->next!=NULL this condition is for even length ll
	//fast!=NULL this condition is for odd length ll

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->data;
}
//Link list me ek element ko search karna hain. iteratively and recursively

bool searchIterative(node* head, int key) {
	node* temp = head;
	while (temp != NULL) {
		if (temp->data == key) {
			return true;
		}
		temp = temp->next;
	}
	return false;
}

bool searchRecursive(node* head, int key) {

	node* temp = head;

	if (temp == NULL) {
		return false;
	}

	if (temp->data == key) {
		return true;
	} else {
		return searchRecursive(head->next, key);
	}
}

void ReverseLL(node* &head) {
	node* current = head;
	node* prev = NULL;
	node* n;

	while (current != NULL) {
		n = current->next;
		current->next = prev;
		prev = current;
		current = n;
	}
	//loop breaks when current==null
	//prev us time par last element par hoga
	//jo new reverse ka head hain.
	head = prev;
}

//LL ko reverse karna hain using recursion?

//Khud se try karna cheating mat karna

//10-15;
//Questions

int main() {
	int n;
	cin >> n;

	node* head = NULL;//This is LL1.
	node* head1 = NULL;//This is LL2.

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
		InsertAtHead(head1, x);
	}
	int key;
	cin >> key;

	Print(head);
	// Print(head);
	// cout << len(head) << endl;
	// cout << midPoint(head) << endl;

	// node* n1 = midPoint1(head1);
	// cout << n1->data << endl;

	// cout << midPoint1(head)->data << endl;
	cout << midPointfastfirst(head) << endl;
	cout << searchIterative(head, key) << endl;
	cout << searchRecursive(head, key) << endl;

	ReverseLL(head);

	Print(head);
}