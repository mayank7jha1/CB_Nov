#include<bits/stdc++.h>
using namespace std;
const int N = 0;


bool Solve(int* a, int n) {

	//Running Sum
	int pre = 0;
	unordered_set<int>s;

	for (int i = 0; i < n; i++) {
		pre += a[i];
		if (pre == 0 or s.count(pre) == 1) {//O(1)
			return true;
		}
		s.insert(pre);
	}

	return false;
}

//Prefix array agar zero aajaye ya dublicate aajeye toh subarray zero
//sum ka hota hain.

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Solve(a, n) << endl;
}