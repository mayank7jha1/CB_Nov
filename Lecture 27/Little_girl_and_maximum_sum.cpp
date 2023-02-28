#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long


int32_t main() {

	int n, q;
	cin >> n >> q;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// int a[n + 1] = {0};
	// for (int i = 1; i <= n; i++) {
	// 	cin >> a[i];
	// }


	int sum[n] = {0};

	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;

		sum[l - 1]++; //sum[l]++
		sum[r]--;    //sum[r+1]--;
	}


	// for (int i = 1; i <= q; i++) {
	// 	int l, r;
	// 	cin >> l >> r;
	// 	sum[l]++;
	// 	sum[r + 1]--;
	// }

	for (int i = 0; i < n; i++) {
		(sum[i] = ((i == 0) ? sum[i] : (sum[i - 1] + sum[i])));
	}

	// for (int i = 1; i <= n; i++) {
	// 	sum[i] = sum[i - 1] + sum[i];
	// }


	// sum[0] = sum[0];
	// for (int i = 1; i < n; i++) {
	// 	sum[i] = sum[i - 1] + sum[i];
	// }

	// for (int i = 0; i < n; i++) {
	// 	cout << sum[i] << " ";
	// }
	// cout << endl;

	sort(a, a + n);
	sort(sum, sum + n);

	// sort(a+1, a + n+1);
	// sort(sum+1, sum + n+1);

	int ans = 0;

	for (int i = 0; i < n; i++) {
		ans = ans + (sum[i] * a[i]);
	}

	// for (int i = 1; i <= n; i++) {
	// 	ans = ans + sum[i] * a[i];
	// }

	cout << ans << endl;


}