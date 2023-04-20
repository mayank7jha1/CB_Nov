#include<bits/stdc++.h>
using namespace std;
const int N = 0;

//Space Complexity: Ek DP ka array: O(n+1);
//Time Complexity: dp[i]?= ki ith stone par jaane ka min cost kya hain?

//har stone par jaarahe ho and uska answer calucate kar rahe ho:

//Jitne stone hain utne aap aapko kaam karna pada and hence O(n).


//Bottom Stair se top stair par using recursion
//Top Down Approach://PULL DP
int Solve2(int i, vector<int>&height, vector<int>&dp) {

	if (i >= height.size() - 1) {
		return 0;
	}

	if (dp[i] != -1) {
		return dp[i];
	}

	int option1 = INT_MAX, option2 = INT_MAX;

	option1 = abs(height[i] - height[i + 1]) + Solve2(i + 1, height, dp);

	if (i + 2 <= height.size() - 1) {
		option2 = abs(height[i] - height[i + 2]) + Solve2(i + 2, height, dp);
	}


	return dp[i] = min(option1, option2);
}

//Top Stair se bottom stair par using recursion
int Solve(vector<int>&height, int n, vector<int>&dp) {

	if (n <= 0) {
		return 0;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	int option1 = INT_MAX, option2 = INT_MAX;

	if (n - 1 >= 0) {
		int cost = abs(height[n] - height[n - 1]);
		int value = Solve(height, n - 1, dp);
		option1 = value + cost;
	}

	if (n - 2 >= 0) {
		int cost = abs(height[n] - height[n - 2]);
		int value = Solve(height, n - 2, dp);
		option2 = value + cost;
	}

	return dp[n] = min(option1, option2);
}

//Bottom Up Apprach::Push DP
int Solve3(vector<int>&height, vector<int>&dp) {

	dp[1] = abs(height[0] - height[1]);

	for (int i = 2; i < height.size(); i++) {

		dp[i] = min(dp[i - 1] + abs(height[i] - height[i - 1]),
		            dp[i - 2] + abs(height[i] - height[i - 2]));
	}

	return dp[height.size() - 1];
}

int main() {
	int n;
	cin >> n;


	vector<int>height(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	vector<int>dp(n + 1, -1);
	cout << Solve(height, n - 1, dp) << endl;

	dp.clear();
	dp.resize(n + 1, -1);
	cout << Solve2(0, height, dp) << endl;
	dp.clear();
	dp.resize(n + 1, -1);
	cout << Solve3(height, dp) << endl;
}

//Frog 2: H.W.