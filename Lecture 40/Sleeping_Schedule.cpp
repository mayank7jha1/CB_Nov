#include<bits/stdc++.h>
using namespace std;
const int N = 0;
int n, h, l, r;
int a[2001] = {0};
int dp[2001][2001]; //O(n^2)

int Sleeping_Schedule(int index, int waking_hour) {

	if (index == n) {
		return 0;
	}

	if (dp[index][waking_hour] != -1) {
		return dp[index][waking_hour];
	}

	//Index=0 and Wakin_hour=0:0 hr;
	//Yaha se aage maine kaise sone jaaunga

	int x = (waking_hour + a[index]) % h;

	int y = (waking_hour + a[index] - 1) % h;

	int ans1 = 0, ans2 = 0;

	if (x >= l and x <= r) {
		ans1 = 1;
	}

	if (y >= l and y <= r) {
		ans2 = 1;
	}

	int Option1 = ans1 + Sleeping_Schedule(index + 1, x);
	int Option2 = ans2 + Sleeping_Schedule(index + 1, y);

	return dp[index][waking_hour] = max(Option1, Option2);
}


int main() {
	cin >> n >> h >> l >> r;
	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Sleeping_Schedule(0, 0) << endl;
}


//Time Complexity: Atcoder DP contest: Transition Time
//Standard Problems on DP: Best Problems
//Bitmasking :
//Math and Graph