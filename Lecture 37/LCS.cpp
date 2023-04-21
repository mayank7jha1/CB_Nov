#include<bits/stdc++.h>
using namespace std;
const int N = 3001;
int dp[N][N];

//TLE: Logic is Correct!!

string getLCS(string &s, string &t, int len) {
	string LCS;
	int i = 0;
	int j = 0;

	while (len > 0) {
		if (s[i] == t[j]) {
			LCS.push_back(s[i]);
			i++;
			j++;
			len--;
		} else {

			if (dp[i][j + 1] > dp[i + 1][j]) {
				j++;
			} else {
				i++;
			}
		}
	}

	return LCS;
}

int lenLCS(string &s, string &t, int i, int j) {

	if (i >= s.length() or j >= t.length()) {
		return 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	if (s[i] == t[j]) {
		return dp[i][j] = 1 + lenLCS(s, t, i + 1, j + 1);
	} else {

		int option1 = lenLCS(s, t, i + 1, j);
		int option2 = lenLCS(s, t, i, j + 1);

		return dp[i][j] = max(option1, option2);
	}
}


string Solve(string s, string t) {

	memset(dp, -1, sizeof(dp));
	int len = lenLCS(s, t, 0, 0);

	string str = getLCS(s, t, len);
	return str;
}


int main() {
	string s, t;
	cin >> s >> t;

	cout << Solve(s, t) << endl;
}