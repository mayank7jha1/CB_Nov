#include<bits/stdc++.h>
using namespace std;
const int N = 0;
string s;
int k;
int sum[1000005] = {0};

void Solve() {

	int x = 0, ans = 0;

	sum[0] = 1;//For empty String

	for (int i = 0; i < s.length(); i++) {
		x += s[i] - '0';//x is upto this point subarray sum.

		if (x >= k) {
			ans = ans + sum[x - k];
		}

		sum[x] = sum[x] + 1;
	}

	// for (int i = 0; i < 10; i++) {
	// 	cout << sum[0] << " ";
	// }
	// cout << endl;

	cout << ans << endl;
}



int main() {
	cin >> k >> s;

	Solve();
}