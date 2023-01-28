#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n, m;
	cin >> n >> m;

	int a[n], b[m];


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);

	for (int i = 0; i < m; i++) {
		int ans = upper_bound(a, a + n, b[i]) - a;

		cout << ans << " ";
	}
}


//Binary