#include<bits/stdc++.h>
using namespace std;



int findPeakElement(int a[], int n) {
	int s = 0;
	int e = n - 1;

	int ans = -1;//This can never be your answer

	while (s <= e) {
		int mid = (s + e) / 2;
		if (mid + 1 == n or a[mid] >= a[mid + 1]) {
			//mid can be your peak, so store it.
			ans = mid;
			//Space ko chota kardo:
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}



int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << findPeakElement(a, n) << endl;
}