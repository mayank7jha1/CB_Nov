#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


//Search karna hain in a sorted array

int Solve(int a[], int n, int key) {
	//Define your search space:

	int s = 0, e = n - 1;
	int ans = -1;//Because if element doesn't exist return -1

	while (s <= e) {//0------n-1//s>e search collide kardiya(x).
		int mid = (s + e) / 2;//Mid index: a[mid]

		if (a[mid] == key) {
			ans = mid;//answer index store karta hain for the target element
			return ans;
		} else if (a[mid] > key) {
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

	int key;
	cin >> key;

	cout << Solve(a, n, key) << endl;
}