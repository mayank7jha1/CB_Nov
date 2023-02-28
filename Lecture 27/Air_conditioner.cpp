#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
#define int long long
int a[N];
int l[N], r[N];

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		int n, intial_temp;
		cin >> n >> intial_temp;
		for (int i = 0; i < n; i++) {
			cin >> a[i] >> l[i] >> r[i];
		}
		int flag = 1;
		int prev_temp = 0;
		int maximum_temp = intial_temp;
		int minimum_temp = intial_temp;

		for (int i = 0; i < n; i++) {
			maximum_temp = maximum_temp + a[i] - prev_temp;
			minimum_temp = minimum_temp - a[i] - prev_temp;

			if (maximum_temp<l[i] or minimum_temp>r[i]) {
				flag = false;
				break;
			}

			maximum_temp = min(maximum_temp, r[i]);
			minimum_temp = max(minimum_temp, l[i]);

			prev_temp = a[i];
		}
		if (flag == false) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}



// 5 1 2

// 7 3 5


// maximum_temp = 2 and minimum_temp = 1;


// maximum_temp = 2 + (7 - 5);
// minimum_temp = 1 - (7 - 5);