#include<iostream>
using namespace std;

int freq[100005] = {0};

int main() {
	int n;
	cin >> n;
	int a[n];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		freq[a[i]]++;
		ans = ans ^ a[i];
	}
	//cout << freq[1] << " " << freq[2] << " " << freq[4] << " " << endl;


	// for (int i = 0; i < 100005; i++) {
	// 	if (freq[i] == 1) {
	// 		cout << i;
	// 		break;
	// 	}
	// }
	cout << ans << endl;

	//0 and 1 0 occur even and 1 odd:


	// bitmask: 1^1=0;
	return 0;
}