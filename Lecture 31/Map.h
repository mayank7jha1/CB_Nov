
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
template<typename T>




class node {
public:
	T val;
	string key;

	//Seperate Chaining
	node<T>* next;

	//Constructor

	node(string s, int v) {
		val = v;
		key = s;
		next = NULL;
	}


	//Destructor
	~node() {
		if (next != NULL) {
			delete next;//Recursively delete kardeta hai poori chain ko (LL ko)
		}
	}
};

template<typename T>
class hashmap {
	node<T>** table;
	int total_size;
	int current_size;

	void rehashing() {
		node<T>** oldtable = table;

		int old_table_size = total_size;

		table = new node<T>*[2 * total_size];

		total_size = total_size * 2;

		//Data ko copy karna hain from oldtable to new table

		for (int i = 0; i < total_size; i++) {
			table[i] = NULL;
		}

		current_size = 0;

		//Copy Process:

		for (int i = 0; i < old_table_size; i++) {
			node<T>* head = oldtable[i];//Koi bhi ith index ek LL.

			while (head != NULL) {
				insert(head->key, head->val);
				head = head->next;
			}
		}

		delete[] oldtable;
	}

	int hashfunction(string key) {
		int multiply = 1;
		int ans = 0;
		for (int i = 0; i < key.length(); i++) {
			ans += ((key[i] % total_size) * (multiply % total_size)) % total_size;
			multiply = multiply * 29;
			multiply = multiply % total_size;
		}
		ans = ans % total_size;
		return ans;
	}

public:

	hashmap(int size = 10) {
		total_size = size;
		table = new node<T>*[size];
		current_size = 0;
		for (int i = 0; i < total_size; i++) {
			table[i] = NULL;
		}
	}


	void insert(string key, int value) {
		int HashIndex = hashfunction(key);

		node<T>* n = new node<T>(key, value);//Constructor

		current_size++;

		//Insert at head: is new node ko ith index par head ki tarah
		//attach kardo in hashtable.

		n->next = table[HashIndex];
		table[HashIndex] = n;

		//Agar kabhi Hash Table ka size 70% se jada hogaya to stop and
		//rehash.

		//Load Factor: (Current size/total size): 0.7

		if ((current_size / total_size * 1.0) >= 7.0) {
			rehashing();
		}
	}


	node<T>* search(string key) {
		int HashIndex = hashfunction(key);

		node<T>* head = table[HashIndex];
		while (head != NULL) {
			if (head->key == key) {
				return head;
			}
			head = head->next;
		}
		return NULL;
	}


	void print() {
		for (int i = 0; i < total_size; i++) {
			cout << i << " -> ";

			node<T>* head = table[i];
			while (head != NULL) {
				cout << head->key << " ";
				head = head->next;
			}
			cout << endl;
		}
	}
};