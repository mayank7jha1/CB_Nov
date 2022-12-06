#include<bits/stdc++.h>
using namespace std;


int arrayPairSum(int a[], int n) {
	sort(a, a + n);

	int ans = 0;
	for (int i = 0; i < n; i = i + 2) {
		ans = ans + a[i];
	}
	return ans;
}

int arrayPairSum2(int a[], int n) {
	long long int left = -10000;
	long long int right = 10000;
	//Frequency array: 10^4 *2;;;;-10^4 element ki value
	//aapki zero index par aayegi issi ko shifting kehte hain
	//0 value aapki 10^4 index par aayegi
	//10^4 value aapki 2*10^4 index par aayegi

	int size = right - left + 1;

	int freq[size] = {0};

	for (int i = 0; i < n; i++) {
		freq[a[i] - left]++;
	}

	//Contribution of every element:
	int ans = 0;
	int Residue = 0;
	for (int i = left; i <= right; i++) {
		ans += (((freq[i - left]) - Residue + 1) / 2) * i;
		Residue = ((freq[i - left]) + Residue) % 2;
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
	cout << arrayPairSum(a, n) << endl;
	cout << arrayPairSum2(a, n) << endl;
}


//Prefix Array:: Character Array/String:: Two Pointer Approach:: Sliding Window Approach: