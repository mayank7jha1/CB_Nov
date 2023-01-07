#include<bits/stdc++.h>
using namespace std;
// const int N = ;

bool Issorted(int a[], int i, int n) {//n=4;//i=0;

	if (i == n) {
		return true;
	}


	if (a[i] > a[i + 1]) {
		return false;
	}

	return Issorted(a, i + 1, n);
}

//Sorted: ascending:

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << Issorted(a, 0, n - 1) << endl;
}

// 0  1   2  3  4
// 11 12 13 14 15:

// n = 5;
// n = 4;

// ek element hain then that element will always be sorted;

// last element you don't check;


//