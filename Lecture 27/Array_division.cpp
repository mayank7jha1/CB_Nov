#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

#define int long long

int32_t main() {
	int n;
	cin >> n;

	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	if (sum % 2 == 1) {
		cout << "NO" << endl;
		return 0;
	}

	sum = sum / 2; //Because we want ek half ka sum.

	int x = 0;

	int freq[100005] = {0};//Because aap array lerahe ho:
	//small cases upto a[i]=10^5;

	//a[i] is Positve and less than 10^6
	//map me deal hojayega


	//This is to check if an element is present or not.

	// map<int, int>freq;


	for (int i = 0; i <= n; i++) {
		x = x + a[i];//I am taking running sum.

		freq[a[i]]++;

		if (freq[x - sum] >= 1) {
			cout << "YES" << endl;
			return 0;
		}
	}


	x = 0;
	memset(freq, 0, sizeof(freq));
	// freq.clear();

	for (int i = n - 1; i >= 0; i--) {
		x += a[i];
		freq[a[i]]++;
		if (freq[x - sum] >= 1) {
			cout << "YES" << endl;
			return 0;
		}
	}
}


