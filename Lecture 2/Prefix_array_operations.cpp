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

	//For Queries build the prefix array:
	//Create a prefix array of one element extra:

	int pre[n + 1] = {0};

	int q;
	cin >> q;
	while (q--) {
		int l, r, z;
		cin >> l >> r >> z;
		//Step 2: Build the prefix array based on operations
		pre[l] = pre[l] + z;
		pre[r + 1] = pre[r + 1] - z;
	}


	//Step 3: Take the prefix sum of the prefix array
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + pre[i];
		pre[i] = sum;
	}

	//Step 4: Add the original array:

	for (int i = 0; i < n; i++) {
		a[i] = a[i] + pre[i];
	}

	//Step 5: Print the array:

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

