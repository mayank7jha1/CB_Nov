#include<bits/stdc++.h>
using namespace std;
const int N = 1001;
#define int long long
int n, m, p;
int grid[N][N] = {0};
#define mod 1000000007


int Solve() {

	int dp[n + 1][m + 1] = {0};

	if (grid[1][1] == -1 or grid[n][m] == -1) {
		return 0;
	}

	dp[1][1] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == 1 and j == 1) {
				continue;
			}

			if (grid[i][j] == -1) {
				dp[i][j] = 0;
			} else {


				dp[i][j] = (((i == 1) ? 0 : dp[i - 1][j]) +
				            ((j == 1) ? 0 : dp[i][j - 1])) % mod;
			}
		}
	}
	return dp[n][m];
}


int32_t main() {
	cin >> n >> m >> p;
	while (p--) {
		int x, y;
		cin >> x >> y;
		grid[x][y] = -1;
	}

	cout << Solve() << endl;
}