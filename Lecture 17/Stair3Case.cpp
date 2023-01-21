#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
int ans = INT_MAX;


void StairCase(int a[], int n, int i, int steps, bool visited[]) {
	if (i == n) {
		ans = min(steps, ans);
		return;
	}

	//ith stair:
	visited[i] = 1;

	if (i + 1 <= n and !visited[i + 1]) {
		StairCase(a, n, i + 1, steps + 1, visited);
	}


	if (i + a[i] <= n and i + a[i] >= 0 and !visited[i + a[i]]) {
		StairCase(a, n, i + a[i], steps + 1, visited);
	}


	visited[i] = 0;//Backtrack
}



int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ans = INT_MAX;
		bool visited[100005] = {0};
		int a[n + 1];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		StairCase(a, n, 0, 0, visited);
		cout << ans << endl;
	}
}