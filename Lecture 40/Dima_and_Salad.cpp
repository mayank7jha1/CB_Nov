#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int n, k;
int *taste, *calorie;

int dp[105][2 * N];

//DP meaning: Dp[index][Sum]== Is Index tak humne kuch fruit choose kare
//unka maximum taste is Given by DP[index][Sum] and It's ai-kbj===sum.

//Index and Sum ==== O(N^2)*O(constant):

//ek index par multiple sum hosakta hain?

//agar store karne ko bolu : dp[index][sum]

//index kitne hain multiple index hain?

//2-d array ko aap fill kar rahe ho?
//O(index* sum)==O(n^2):

//Traisition: aapko ye 2-d array fill karne ke matlab ek index,sum
//ko fill karne me kitna time lagega. O(constant):

//O(n^2):


//2-D array / states 2 states: O(n^2)*O(constant):
//dp[index][sum]--->dusre dp[index][sum]===constant



int Dima_and_Salad(int index, int Sum) {
	if (index == n) {
		if (Sum == 0) {
			return 0;//Aapne already taste is path ka calculate kar rakha hain
		} else {
			/*
			This Path can never be your answer, take something so small
			that we can be certain that any other path if exists
			will have a value greater than this and when we will take
			maximum this path will be ignored.
			*/

			return -1e8;
		}
	}

	if (dp[index][Sum + N] != -1) {
		return dp[index][Sum + N];
	}


	int Option1 = taste[index] + Dima_and_Salad(index + 1, Sum + (taste[index] - k * calorie[index]));
	int Option2 = 0 + Dima_and_Salad(index + 1, Sum);


	return dp[index][Sum + N] = max(Option1, Option2);;
}

int main() {
	cin >> n >> k;
	taste = new int[n];
	calorie = new int[n];
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < n; i++) {
		cin >> taste[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> calorie[i];
	}

	//cout << n << " ";

	int ans = Dima_and_Salad(0, 0);
	//cout << ans << endl;

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}























// ai-kbj===(1-10*100)=999 * 100=== 99900 = ~10^5