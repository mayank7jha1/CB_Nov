#include<bits/stdc++.h>
using namespace std;
const int N = 5e3 + 10;
#define int long long
int n, m;

int a[N], b[N], dp[N][N];

//i--->boys
//j-->girls


int Valentine_Magic(int i, int j) {

	if (i == n) {
		return 0;//Matlab saare ladko ne pair bana liya and hence answer already calculated hain.
	}

	if (j == m) {


		//All the girls are checked if they have to make/ not make pair.

		// Abhi bhi kuch ladke bache hain and ladkiya khatam hogyi
		//This is not possible and hence we cannot have this option/path as
		//our answer.

		return 1e12;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}


	/*
		Current Boy does not pair with current girl.
	*/
	int Option1 = 0 + Valentine_Magic(i, j + 1);

	/*
		Current boy makes pair with the current girl
	*/
	int Option2 = abs(a[i] - b[j]) + Valentine_Magic(i + 1, j + 1);



	/*	Current girl skips the current boy.(x)
		int Option3 = 0 + Valentine_Magic(i + 1, j);
	*/

	return dp[i][j] = min(Option1, Option2);

}


int32_t main() {
	cin >> n >> m;

	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);

	int ans = Valentine_Magic(0, 0);

	cout << ans << endl;
}