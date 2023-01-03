#include<bits/stdc++.h>
using namespace std;
//Frequency array of digit:

//array ke element ka input liya
//array par iterate kiya and every element%10 and store it.
//Create a frequency array of the above stored digits.


int cnt[10];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < 10; i++) {
			cnt[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			x = x % 10;
			cnt[x]++;
		}
		int ans[100005] = {0};

		int k = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < min(cnt[i], 3); j++) {
				ans[k] = i;
				k++;
			}
		}

		int flag = 0;

		int len1 = k;//Size of the answer array.
		for (int i = 0; i < len1; i++) {
			for (int j = i + 1; j < len1; j++) {
				for (int k = j + 1; k < len1; k++) {
					if ((ans[i] + ans[j] + ans[k]) % 10 == 3) {
						flag = 1;
						break;
					}
				}
			}
		}

		if (flag == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

// cnt[i]=3;



// 23 24 25 21 21 3 4  5 5 6 66

// 0->2
// 1->5
// 2->7



// ans[] = {0, 0, 1, 1, 1, 2, 2, 2};//max=30
// //Brute force laagaunga and basic combinations banaunga