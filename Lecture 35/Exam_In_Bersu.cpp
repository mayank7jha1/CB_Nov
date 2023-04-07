
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
#define int long long

int n, m;
int a[N];
int Student_Time[101] = {0};

void Solve() {
	int total_time = 0;

	for (int i = 0; i < n; i++) {

		int difference = total_time - m + a[i];

		int Students_Removed = 0;

		if (difference > 0) {
			//We need to remove certain students?

			for (int j = 100; j > 0; j--) {
				int contribution = j * Student_Time[j];

				if (difference <= contribution) {
					//Toh aapka kaam iss element se hojayega
					//aap isse element ke kuch freq ko remove
					//karke answer nikal sakte ho

					Students_Removed += ((difference - 1 + j) / j);
					break;
				}

				Students_Removed = Students_Removed + Student_Time[j];
				difference = difference - contribution;
			}
		}

		Student_Time[a[i]]++;
		total_time += a[i];
		cout << Students_Removed << " ";
	}
}


int32_t main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	Solve();
}