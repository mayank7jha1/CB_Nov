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

	//You have to perform q operations:

	int q;
	cin >> q;  //tumhare pass q queries hain and har ek query me aap
	while (q--) {
		int l, r, z;
		cin >> l >> r >> z;
		//Aapko z ko add karna hain in the range l to r.

		for (int i = l; i <= r; i++) {//ye kaam kar rahe ho:
			//ek query me aap ye loop worst case me n time chaloge
			//that means n computations and hence for q
			//queries total computation is q*n.
			a[i] = a[i] + z;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}

//q*n