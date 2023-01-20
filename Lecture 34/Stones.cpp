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


string Solve(vector<int>&a, int k) {

	bool dp[k + 1];
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= k; i++) {
		for (int move : a) {
			if (move > i) {
				continue;
			}

			if (dp[i - move] == 0) {
				dp[i] = 1;
			}
		}
	}
	return dp[k] ? "First" : "Second";
}

//Dp[i]=1: i stones hain and the person who has the chance to
//remove stones from this i stones will definedly will.

//dp[i]=0: i stones hain and the person who has the chance to
//remove some x stone from these i stones will for sure loose.

int main() {
	int n, k;
	cin >> n >> k;

	vector<int>v(n);
	for (int i = 0; i <= n; i++) {
		cin >> v[i];
	}

	cout << Solve(v, k) << endl;
}