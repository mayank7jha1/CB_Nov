#include<iostream>
#include<bits/stdc++.h>
using  namespace std;

void Print(list<int>&f) {

	//You can iterate over a list using a iterator

	list<int>::iterator it;

	for (it = f.begin(); it != f.end(); it++) {
		cout << (*it) << " -> ";
	}

	//auto : int:

	//For every element that is inside forward list aap kaam karo

	// for (auto x : f) {
	// 	cout << x << " -> ";
	// }

	cout << "NULL" << endl;;

}


int main() {
	list<int>v;

	//Kyuki ye doubly ll hain.

	v.push_back(19);

	v.push_front(35);
	v.push_back(45);
	v.push_front(1);


	// v.pop_front();
	// v.pop_back();




	v.sort();

	v.reverse();

	cout << v.front() << " " << v.back() << endl;

	Print(v);
}


//list kaafi forward: linked forward
//doubly ll

// collection:













