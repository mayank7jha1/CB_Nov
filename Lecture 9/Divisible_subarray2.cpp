#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int sum = 0;
		int freq[100005] = {0};
		freq[0] = 1;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];//Prefix array
			sum = sum % n;//Mod lena
			sum = (sum + n) % n;//So that -ve number na aaye
			freq[sum]++;
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			int x = freq[i];
			ans += (x * (x - 1)) / 2;
		}
		cout << ans << endl;
	}
}






// -10 % 3 = -1;

// (-10 % 3 + 3) % 3 = 2;