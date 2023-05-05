#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;

int p, n, k;
int cost[N] = {0};

int Price() {

	int pre[N] = {0};//dp[N];
	sort(cost, cost + n);

	for (int i = 0; i < n; i++) {
		if (i < k - 1) {
			pre[i] = ((i == 0) ? 0 : pre[i - 1]) + cost[i];
		} else if (i == k - 1) {
			pre[i] = cost[i];
		} else {
			pre[i] = pre[i - k] + cost[i];
		}
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (pre[i] <= p) {
			ans = i + 1;
		}
	}

	return ans;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> p >> k;
		for (int i = 0; i < n; i++) {
			cin >> cost[i];
		}
		cout << Price() << endl;
	}
}


//Multidimentional DP and Concept