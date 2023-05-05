#include<bits/stdc++.h>
using namespace std;
const int N = 1001;

int dp1[N][N];//Boy comes from (1,1) to a random box i,j
int dp2[N][N]; //Girl comes from (m,1) to a random box i,j
int dp3[N][N]; //Boy goes from destination (n,m) to a random box i,j
int dp4[N][N]; //Girl goes from destination (1,m) to a random box i,j

int main() {
	int Calorie[N][N];
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> Calorie[i][j];
		}
	}

	int ans = INT_MIN;

	//Precomputation

	//DP 1: (1,1)---->(i,j)
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp1[i][j] = max(dp1[i - 1][j], dp1[i][j - 1]) + Calorie[i][j];
		}
	}

	//DP 2: (n,1)---->(i,j)
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= m; j++) {
			dp2[i][j] = max(dp2[i + 1][j], dp2[i][j - 1]) + Calorie[i][j];
		}
	}

	//DP3: (n,m)---->(i,j)
	for (int i = n; i >= 1; i--) {
		for (int j = m; j >= 1; j--) {
			dp3[i][j] = max(dp3[i + 1][j], dp3[i][j + 1]) + Calorie[i][j];
		}
	}


	//DP4: (1,m)----->(i,j)
	for (int i = 1; i <= n; i++) {
		for (int j = m; j >= 1; j--) {
			dp4[i][j] = max(dp4[i - 1][j], dp4[i][j + 1]) + Calorie[i][j];
		}
	}


	//Done Scenario Calculate karne hain for every box from 2--->n-1 tak as the
	//last and first row and column couldnot be the meeting point and calculate the
	//maximum out of all the meeting point.


	for (int i = 2; i <= n - 1; i++) {
		for (int j = 2; j <= n - 1; j++) {

			//Boy Comes from left and goes to right and girl comes from down and goes up.
			int Option1 = dp1[i][j - 1] + dp2[i + 1][j] + dp3[i][j + 1] + dp4[i - 1][j];

			//Boy Comes from up and goes down and girl comes from left and goes right
			int Option2 = dp1[i - 1][j] + dp2[i][j - 1] + dp3[i + 1][j] + dp4[i][j + 1];

			ans = max(Option1, Option2);
		}
	}

	cout << ans << endl;
}