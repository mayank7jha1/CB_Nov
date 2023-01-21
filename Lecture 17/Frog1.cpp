#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int Solve(int a[], int n) {

	if (n <= 0) {
		return 0;
	}
	int option1 = INT_MAX, option2 = INT_MAX;

	//You are taking one step:
	//Agar aap aakhri stone par pahuch gaye?
	//ek step piche se:
	//Recursion ko bologe ki main second last stone par kaise pahucha?
	if (n - 1 >= 0) {
		option1 = abs(a[n] - a[n - 1]) + Solve(a, n - 1);
	}



	if (n - 2 >= 0) {
		option2 = abs(a[n] - a[n - 2]) + Solve(a, n - 2);
	}


	int ans = min(option2, option1);
	return ans;
}


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	cout << Solve(a, n - 1) << endl;
}