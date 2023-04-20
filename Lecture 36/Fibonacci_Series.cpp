#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int dp[100005];
//Recursive DP:
int Fib(int n) {//State: Problem:

	if (n <= 1) {
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	int option1 = Fib(n - 1);//Transition
	int option2 = Fib(n - 2);//Transition

	return dp[n] = option1 + option2;
}

//Iterative Way: dp[state][state]?? meaning
int Fib2(int n) {

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {
	int n;
	cin >> n;

	// for (int i = 0; i <= n; i++) {
	// 	dp[i] = -1;
	// }

	//memset: Is a function: -1,0

	memset(dp, -1, sizeof(dp));
	cout << Fib(n) << endl;

	memset(dp, -1, sizeof(dp));
	cout << Fib2(n) << endl;
}