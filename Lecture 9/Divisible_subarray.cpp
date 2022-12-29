#include<bits/stdc++.h>
using namespace std;
#define int long long
//Wrong answer: Why Because element can be negative also
//that means prefix sum can be negative that means you
//cannot store that sum directly inside the prefix sum
//insead take running sum.


//Since humne kaafi arrays bana liye hain so this program is slow.

// 10^8 array:

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];//10^5

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int pre[n + 1] = {0};//10^5
		pre[0] = (a[0] + n) % n;

		//Prefix lena
		for (int i = 1; i < n; i++) {
			pre[i] = ((pre[i - 1] % n + ((a[i] % n) + n) % n)) % n;
			pre[i] = (pre[i] + n) % n;
		}

		for (int i = 0; i < n; i++) {
			pre[i] = pre[i] % n;
		}

		int freq[100005] = {0};//10^5
		freq[0] = 1;
		for (int i = 0; i < n; i++) {
			freq[pre[i]]++;
		}

		int ans = 0;

		for (int i = 0; i < 100005; i++) {
			if (freq[i] > 1) {
				ans = ans + (freq[i] * (freq[i] - 1)) / 2;
			}
		}
		cout << ans << endl;
	}
}

//TLE beacuse time ka issue nahi hain issue memory ka hain.

//MLE: Memory limit exceed kar jaati hain tab aata hain: