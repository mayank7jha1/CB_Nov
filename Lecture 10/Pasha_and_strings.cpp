#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
#define As 200005



int32_t main() {
	string s;
	cin >> s;

	//cout << s << endl;
	int len = s.length();
	int m;
	cin >> m;
	int pre[As] = {0};

	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;

		//Hamare string k index 0 based hain
		//and question me 1 based hain.
		pre[x - 1] = pre[x - 1] + 1;
		//Because i want to do in the first half only.
	}

	int ans = 0;
	for (int i = 0; i < len / 2; i++) {
		ans += pre[i];

		if (ans % 2 == 1) {
			swap(s[i], s[len - i - 1]); //0 based ke acc
		}
	}

	cout << s << endl;
}


// abcdef
// 0----5

// 6 - 0 - 1 == 5;