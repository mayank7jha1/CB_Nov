#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long

int combine(string &s) {
	int ans = 0;
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 's') {
			count++;
		} else {
			ans = ans + count;
		}
	}
	return ans;
}

bool compare(string &s, string &t) {

	string s1 = s + t;//s=ssh:  //t=hs

	//s1=sshhs
	//s2=hsssh

	//s1::4
	//s2=3

	string s2 = t + s;

	return combine(s1) > combine(s2);//a[i]==ssh,hs

	//ssh hs:
}


int32_t main() {
	int n;
	cin >> n;

	string a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n, compare);
	//s ssh hs hhhs

	string ans;
	for (int i = 0; i < n; i++) {
		ans = ans + a[i];//ssshhshhhs
	}
	cout << combine(ans) << endl;//18
}