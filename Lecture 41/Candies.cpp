#include<bits/stdc++.h>
using namespace std;
const int N = 0;
// #define mod 1e9+7
#define int long long
#define mod 1000000007

int Solve(vector<int>&max_candy, int n, int k) {
	int dp[n + 2][k + 2];

	//j>v[1]===0/1

	for (int j = 0; j <= k; j++) {
		if (j > max_candy[1]) {
			dp[1][j] = 0;
		} else {
			dp[1][j] = 1;
		}
	}



	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= k; j++) {


			if (j == 0) {
				dp[i][j] = dp[i - 1][j];
			} else {
				dp[i][j] = (mod + dp[i][j - 1] + dp[i - 1][j] - 
					((j - max_candy[i] - 1 >= 0) ? dp[i - 1][j - max_candy[i] - 1] : 0)) % mod;
			}
		}
	}
	return dp[n][k];
}


  
int32_t main() {
	int n, k;
	cin >> n >> k;
	vector<int>v(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	cout << Solve(v, n, k) << endl;
}
