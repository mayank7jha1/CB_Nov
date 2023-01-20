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

double dp[3001][3001];

double Solve(vector<double>&a, int i, int x) {

	if (x == 0) {
		return 1;
	}

	if (i == 0) {
		return 0;
	}

	if (dp[i][x] > -0.9) {
		return dp[i][x];
	}

	//ith coin is head
	double op1 = a[i] * Solve(a, i - 1, x - 1);
	//ith coin is tail

	double op2 = (1 - a[i]) * Solve(a, i - 1, x);

	return dp[i][x] = op1 + op2;
}



int main() {
	int n;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	vector<double>a(n + 1);//Indexing is 1 based.
	fr(1, n + 1)
	cin >> a[i];

	prDouble(Solve(a, n, (n + 1) / 2));

}

