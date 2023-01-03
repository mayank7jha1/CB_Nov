#include<bits/stdc++.h>
using namespace std;




int SumofArray(int a[], int i, int n) {
	if (i == n) {
		return 0;
	}

	int ans = a[i] + SumofArray(a, i + 1, n);//i=first stage and second stage
	return ans;
}

int SumofArray2(int a[], int n) {
	if (n < 0) {
		return 0;
	}


	int ans = a[n] + SumofArray2(a, n - 1);
	//you are standing at the last stage//second last
	return ans;
}

int SumofArray3(int a[], int i, int n) {
	if (i == n - 1) {
		return a[n - 1];
	}

	int ans = a[i] + SumofArray(a, i + 1, n);//i=first stage and second stage
	return ans;
}

int SumofArray4(int a[], int n) {
	if (n == 0) {
		return a[0];
	}


	int ans = a[n] + SumofArray2(a, n - 1);
	//you are standing at the last stage//second last
	return ans;
}


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << SumofArray(a, 0, n) << endl;//AAge badh raha hu
	cout << SumofArray2(a, n - 1) << endl; //Piche jaaraha hu
	cout << SumofArray3(a, 0, n) << endl;
	cout << SumofArray4(a, n - 1) << endl;
}