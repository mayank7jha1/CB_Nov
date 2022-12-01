#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;


	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		int sum = 0;
		for (int i = l; i <= r; i++) {
			sum = sum + a[i];
		}
		cout << sum << endl;
	}
}