#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, m, x, y;

bool check(int mid) {
	int Total_Number_Coupons_That_CB_Have = m + ((n - mid) * y);
	int Total_Number_Coupons_That_We_Need = mid * x;

	if (Total_Number_Coupons_That_CB_Have >= Total_Number_Coupons_That_We_Need) {
		return true;
	} else {
		return false;
	}
}



int32_t main() {
	cin >> n >> m >> x >> y;

	int s = 0;
	int e = n;
	int ans = 0;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (check(mid) == 1) {
			s = mid + 1;
			ans = mid;
		} else {
			e = mid - 1;
		}
	}
	cout << ans << endl;
}