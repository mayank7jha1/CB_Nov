
#include<bits/stdc++.h>
using namespace std;
const int N = 0;
int n, m;
int input[1001][1001] = {0};
int pre[1001][1001] = {0};

int main() {
	cin >> n >> m;

	for (int j = 0; j < m; j++) {
		int x, y;
		cin >> x >> y;
		pre[x][y]++;
	}


	//Row Wise Sum
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			pre[i][j] = pre[i][j] + pre[i][j - 1];
		}
	}

	//Column Wise Sum
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			pre[i][j] = pre[i][j] + pre[i - 1][j];
		}
	}


	//NOw You have your prefix sum in 2d Array

	int ans = INT_MIN;

	//Now you are going to every i,j

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {

			int Option1 = pre[i][j];
			int Option2 = pre[n][j] - pre[i][j];
			int Option3 = pre[i][n] - pre[i][j];
			int Option4 = pre[n][n] - Option1 - Option2 - Option3;

			ans = max(ans, min({Option1, Option2, Option3, Option4}));
		}
	}

	cout << ans << endl;
}

