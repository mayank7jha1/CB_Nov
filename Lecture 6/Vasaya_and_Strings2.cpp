#include<bits/stdc++.h>
using namespace std;
int k, n;
string s;

int Solve(char x) {
	int ans = INT_MIN;

	int i = 0;
	int count = 0;

	for (int j = 0; j < n; j++) {
		if (s[j] != x) {
			count++;
		}

		while (count > k and i <= j) {
			if (s[i] != x) {
				count--;
			}
			i++;
		}

		if (j - i + 1 > ans) {
			ans = j - i + 1;
		}
	}
	return ans;
}


int main() {
	cin >> n >> k;
	cin >> s;
	int ans = Solve('a');
	int ans1 = Solve('b');

	cout << max(ans, ans1) << endl;
}