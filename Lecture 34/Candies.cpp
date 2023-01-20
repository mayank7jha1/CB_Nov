#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int Solve(vector<int>&a, int n, int k) {
	ll dp[n + 2][k + 2];


	for (int i = 0; i <= k; i++) {
		//Agar ek bacha and aapke pass j candies hain?
		dp[1][i] = (i > a[1]) ? 0 : 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j];
			} else {
				dp[i][j] = (mod + dp[i][j - 1] +
				            dp[i - 1][j] - ((j - a[i] - 1) >= 0 ? dp[i - 1][j - a[i] - 1] : 0)) % mod;
			}
		}
	}
	return dp[n][k];
}


int main() {
	int n, k;
	cin >> n >> k;

	vector<int>v(n + 1);
	fr(1, n + 1) {
		cin >> v[i];
	}

	cout << Solve(v, n, k) << endl;
}

// N-Slimes