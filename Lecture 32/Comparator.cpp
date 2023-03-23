#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<bits/stdc++.h>
using  namespace std;


bool compare(int x, int y) {
	return x > y;
}




int main() {

	int a[] = {1, 2, 3, 4, 1, 1, 2, 2, 3, 4, 45, 6, 7, 1, 101, 01};
	int n = sizeof(a) / sizeof(int);
	// sort(a, a + n, compare);

	sort(a, a + n, greater<int>());

	vector<int>v{1, 2, 3, 4, 5, 6};

	sort(v.rbegin(), v.rend());

	for (auto x : v) {
		cout << x << " ";
	}
	cout << endl;

	for (auto x : a) {
		cout << x << " ";
	}
	cout << endl;



}