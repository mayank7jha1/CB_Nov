//Vectors are nothing but dynamic arrays:

#include<bits/stdc++.h>
using namespace std;
// const int N = 0;



int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		// int x;
		// cin >> x;
		// v.push_back(x);
		cin >> v[i];
	}
	cout << "[";
	for (int i = 0; i < v.size(); i++) {
		if (i == v.size() - 1) {
			cout << v[i];
		} else {
			cout << v[i] << ",";
		}
	}
	cout << "]";
}