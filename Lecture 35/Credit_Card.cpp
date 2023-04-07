#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, d;
int a[N];
#define int long long

void Solve() {
	//CHeck karo by default kya aapka answer -1 jaaraha hain?
	int amount = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			//Kuch kaam karna hain
			if (amount < 0) {
				amount = 0;
			}
		} else {
			amount += a[i];
			if (amount > d) {
				cout << "-1" << endl;
				return;
			}
		}
	}



	// Agar main line number 28 par khada hu iska matlab kya hain?

	//Iska matlab ye hain ki by default credit card ka amount kabhi bhi
	//d ko exceed nahi kar raha toh main kya karunga main x ki aisi koi
	//value nahi rakh sakta isse amount d ko exceed kar jaaye.



	amount = 0;
	int visits = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			if (amount < 0) {
				//Aapko amount ko kuch banana hain?

				amount = d;
				visits++;
			}
		} else {
			amount += a[i];
			if (amount > d) {
				amount = d;
			}
		}
	}

	cout << visits << " ";

}




int32_t main() {
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	Solve();
}