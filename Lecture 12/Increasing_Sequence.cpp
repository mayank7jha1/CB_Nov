#include<bits/stdc++.h>
using namespace std;
// const int N = 0;



void Increasing(int n) {

	if (n > 10) {
		return;
	}

	cout << n << endl;
	Increasing(n + 1);
}

int main() {
	int n;
	cin >> n;
	Increasing(1);
}


// // 1->10;



// n = 1;

// cout << 1 << endl;
// //NExt stage par jaana hain and same kaam kaarna hain.
// //Print karna hain.

// //Next stage par jaana hain with a new changed n.
// //You want to call the function again with a different n.


