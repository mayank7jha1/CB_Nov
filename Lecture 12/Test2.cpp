#include<bits/stdc++.h>
using namespace std;
// const int N = 0;



void Increasing(int n) {//10

	if (n < 1) {
		return;
	}
	Increasing(n - 1);
	cout << n << endl;
}

int main() {
	int n;
	cin >> n;
	Increasing(n);
}


// // 1->10;



// n = 1;

// cout << 1 << endl;
// //NExt stage par jaana hain and same kaam kaarna hain.
// //Print karna hain.

// //Next stage par jaana hain with a new changed n.
// //You want to call the function again with a different n.


