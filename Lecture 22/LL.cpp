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

void InsertAtTail(node* &head, int value) {
	if (head == NULL) {
		// node* n = new node(value);
		// n->next = head;
		// head = n;

		head = new node(value);
		return;
	}

	//Iterate to the last node:

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	// node* n = new node(value);
	// temp->next = n;

	temp->next = new node(value);
	return;
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

//I am returning node(reverse linked list ka head.)

node* ReverseLL_recursive(node* head) {

	//Agar ll empty hain ya ll me sirf ek element
	//hain to stop hojaana.
	if (head == NULL or head->next == NULL) {
		return head;
	}

	node* new_head = ReverseLL_recursive(head->next);

	node* c = head;
	c->next->next = c;
	c->next = NULL;

	return new_head;//This will remain same as you are
	//continuously returning it.
}


void cycle_creation(node* head) {
	node* temp = head;

	//Aap ll ke last node par chale jao.

	while (temp->next != NULL) {//while(temp!=NULL):: LAST NODE KE EK KHADAM AAGE
		//temp= last node acc. to this logic
		temp = temp->next;
	}

	//You are standing at last node using temp;
	temp->next = head->next->next->next->next;
}


bool isCycle(node* head) {
	node* slow = head;
	node* fast = head;

	//THere meeting point can be /cannot be
	//the origin of cycle.

	//But agar vo meet karte hain so there exists a
	//cyle.

	while (fast != NULL and fast->next != NULL) {
		//Is loop me tab aao jab ye dono true hain.
		slow = slow->next;
		fast = fast->next->next;


		if (slow == fast) {
			return true;
		}
	}

	return false;
}



void break_cycle(node* head) {
	if (isCycle(head) == 0) {
		return;
	}

	//Find out the meeting point:

	node* fast = head;
	node* slow = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow) {
			break;
		}
	}


	//Your fast and slow are currently pointing to the
	//meeting point;


	//Now you want three things:
	//Make sure you have a prev pointer, this pointer
	//will always be one step behind the fast pointer
	//why because when fast pointer will reach
	//the origin it will point to the last node.


	//Make prev point to the node one step behind meeting point
	node* prev = head;

	while (prev->next != fast) {
		prev = prev->next;
	}

	//prev will be at one step behinf the meeting point.

	//you have to reset the pointers.

	slow = head;
	//fast ko bolna hain ki vo abse ek ek kadam chalega

	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
		prev = prev->next;
	}

	//slow and fast are pointing to the origin.
	//prev is pointing to the last element.

	prev->next = NULL;//Hence cycle breaks
}

int main() {
	int n;
	cin >> n;

	node* head = NULL;//This is LL1.
	node* head1 = NULL;//This is LL2.

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
		InsertAtTail(head1, x);
	}
	// int key;
	// cin >> key;

	Print(head);
	// Print(head);
	// cout << len(head) << endl;
	// cout << midPoint(head) << endl;

	// node* n1 = midPoint1(head1);
	// cout << n1->data << endl;

	// cout << midPoint1(head)->data << endl;
	// cout << midPointfastfirst(head) << endl;
	// cout << searchIterative(head, key) << endl;
	// cout << searchRecursive(head, key) << endl;

	// ReverseLL(head);

	// Print(head);

	// node* new_head = ReverseLL_recursive(head);
	// Print(new_head);
	//cycle_creation(head);
	// cout << isCycle(head) << endl;
	// break_cycle(head);
	// cout << isCycle(head) << endl;
	Print(head1);
}


//Insert at any position in a LL.