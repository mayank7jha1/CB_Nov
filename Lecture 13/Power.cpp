#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long

int power(int x, int i, int n) {//1--->n

	// if (i == n) {
	// 	return x;
	// }

	if (i > n) {
		return 1;
	}


	int ans = x * power(x, i + 1, n);
	return ans;
}

int power2(int x, int n) {//n-->1

	if (n == 1) {
		return x;
	}

	// if (n == 0) {
	// 	return 1;
	// }

	int ans = x * power2(x, n - 1);
	return ans;
}

int fast_power(int x, int n) {
	if (n == 0) {
		return 1;
	}

	int ans = fast_power(x, n / 2);

	if (n % 2 == 1) {
		return ans * ans * x;
	}

	return ans * ans;
}

int main() {
	int x, n;
	cin >> x >> n;
	cout << power(x, 1, n) << endl;
	cout << power2(x, n) << endl;
}



// 5*5*5*5=



// n=4 and i=1