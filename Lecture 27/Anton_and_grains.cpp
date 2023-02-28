#include<bits/stdc++.h>
using namespace std;
const int N = 1e9 + 7;
#define int long long


int Solve() {
	int n, m;
	cin >> n >> m;

	if (m >= n) {
		return n;
	} else {
		int s = 0;
		int e = N;
		int ans = -1;

		while (s <= e) {

			int mid = (s + e) / 2;
			int k1 = (mid * (mid + 1)) / 2;
			int k2 = (mid * (mid - 1)) / 2;

			if (k1 >= n - m and k2 < n - m) {
				ans = mid;
				break;
			} else if (k1 < n - m) {
				s = mid + 1;
			} else {
				e = mid - 1;
			}
		}

		return ans + m;
	}
}




int32_t main() {
	cout << Solve() << endl;
}