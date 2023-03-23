#include<bits/stdc++.h>
using namespace std;
const int N = 0;


bool Solve(int* a, int n, int k) {

	//Running Sum
	int pre = 0;
	unordered_set<int>s;

	for (int i = 0; i < n; i++) {
		pre += a[i];
		if (pre == k or s.count(pre - k) == 1) { //O(1)
			return true;
		}
		s.insert(pre);
	}

	return false;
}

//Prefix array agar me sum k aajaye ya pre-k ka dublicate a toh subarray k
//sum ka hota hain.

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k;
	cin >> k;

	cout << Solve(a, n, k) << endl;
}


// sum(l, r) = pre[r] - pre[l - 1];


// sum(l, r) = k;

// pre[r] - pre[l - 1] = k;

// pre[r] = pre[l - 1] + k;

// pre[r] - k = pre[l - 1];