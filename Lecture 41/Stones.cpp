#include<bits/stdc++.h>
using namespace std;
const int N = 0;


string Solve(vector<int>&v, int k) {
	int dp[k + 1];

	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= k; i++) {
		for (int move : v) {
			if (move > i) {
				continue;
			}
			if (dp[i - move] == 0) {
				dp[i] = 1;
			}
		}
	}

	if (dp[k] == 1) {
		cout << "First" << endl;
	} else {
		cout << "Second" << endl;
	}
}

int main() {
	int n, k;
	cin >> n >> k;

	vector<int>v(n);

	for (int i = 0; i <= n; i++) {
		cin >> v[i];
	}


	cout << Solve(v, k) << endl;
}