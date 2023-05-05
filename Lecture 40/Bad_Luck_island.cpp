#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long
int r, s, p;
double dp[101][101][101];

//Case Where we are Only Concerned with rocks.
double solveRocks(int r, int p, int s) {

	if (s == 0 or r == 0) {
		return 0.0;
	}

	if (p == 0) {
		return 1.0;
	}

	if (dp[r][p][s] > -1.0) {
		return dp[r][p][s];
	}

	double ans = 0;
	double total = (r * p) + (p * s) + (s * r);

	//Fight r vs p

	ans += ((r * p) / total) * solveRocks(r - 1, p, s);
	//cout << ans << " ";

	//Fight r vs s

	ans += ((r * s) / total) * solveRocks(r, p, s - 1);
	//cout << ans << " ";

	//Fight p vs s

	ans += ((p * s) / total) * solveRocks(r, p - 1, s);
	//cout << ans << endl;

	return dp[r][p][s] = ans;
}

//Scissor Being the Only Survivor
double solveScissors(int r, int p, int s) {

	if (r == 0) {
		return 1.0;
	}

	if (p == 0 or s == 0) {
		return 0.0;
	}

	if (dp[r][p][s] > -1.0) {
		return dp[r][p][s];
	}

	double ans = 0;
	double total = (r * p) + (p * s) + (s * r);

	//Fight r vs p

	ans += ((r * p) / total) * solveScissors(r - 1, p, s);
	//cout << ans << " ";

	//Fight r vs s

	ans += ((r * s) / total) * solveScissors(r, p, s - 1);
	//cout << ans << " ";

	//Fight p vs s

	ans += ((p * s) / total) * solveScissors(r, p - 1, s);
	//cout << ans << endl;

	return dp[r][p][s] = ans;
}

double solvePapers(int r, int p, int s) {

	if (s == 0) {
		return 1.0;
	}

	if (r == 0 or p == 0) {
		return 0.0;
	}

	if (dp[r][p][s] > -1.0) {
		return dp[r][p][s];
	}

	double ans = 0;
	double total = (r * p) + (p * s) + (s * r);

	//Fight r vs p

	ans += ((r * p) / total) * solvePapers(r - 1, p, s);
	//cout << ans << " ";

	//Fight r vs s

	ans += ((r * s) / total) * solvePapers(r, p, s - 1);
	//cout << ans << " ";

	//Fight p vs s

	ans += ((p * s) / total) * solvePapers(r, p - 1, s);
	//cout << ans << endl;

	return dp[r][p][s] = ans;
}



int32_t main() {
	memset(dp, -1, sizeof(dp));
	cin >> r >> s >> p;
	cout << fixed << setprecision(9) << solveRocks(r, p, s) << " ";
	memset(dp, -1, sizeof(dp));
	cout << fixed << setprecision(9) << solveScissors(r, p, s) << " ";
	memset(dp, -1, sizeof(dp));
	cout << fixed << setprecision(9) << solvePapers(r, p, s) << endl;
}