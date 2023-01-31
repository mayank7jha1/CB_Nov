#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {


	//You have to take input of
	//n variables and you have to tell me
	//the max out of it.


	// You cannot store n variables;
	//You cannot create n buckets and also
	//you are not allowed to use arrays.

	//Loop ke through input lelena one by one.
	//Run time par.

	// int n;
	// cin >> n;
	// int i = 1;
	// int x;
	// int maximum = INT_MIN;
	// while (i <= n) {
	// 	cin >> x;
	// 	maximum = max(maximum, x);
	// 	i = i + 1;
	// }

	// cout << maximum << endl;

	//Compiler ko do input ke bich me difference
	//kaise pata chal raha hain.


	//cin: input buffer:
	//>>:: cin:: whitespaces ko consider nahi kiya
	//jata

	//spaces,endl,/n,tab



	//N deraha hain: and n character ka input lo
	//and then print karva do:

	// int n;
	// cin >> n;

	// int i = 1;
	// char x;
	// while (i <= n) {
	// 	cin >> x;
	// 	cout << x;
	// 	i = i + 1;
	// }

	//VS Code:


// "()" : Condition: True / False

// 	(true) {

// 	}

	char x;
	// while (cin >> x) {
	// 	cout << x;
	// }

	while (cin.get(x)) {
		cout << x;
	}

}


//Imagine: universe group of characters
//space seperated diya jaata haiin?
//words

//since char bucket vo ek byte ki hain.
//ek character:

//cin:: Ignore
//.get()