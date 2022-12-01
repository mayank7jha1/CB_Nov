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

	int pre[n + 1] = {0}; //Size kyalu??


	//Array ka sum nikalte ho na usme ek line add kardena:
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
		pre[i] = sum;
	}

	cout << sum << endl;

	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}

	cout << endl;

	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		if (l > 0) {
			cout << pre[r] - pre[l - 1] << endl;
		} else {
			cout << pre[r] << endl;
		}
	}
}

