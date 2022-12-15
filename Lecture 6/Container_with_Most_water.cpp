#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int maxArea(int a[], int n) {
	int area = 0;
	int j = n - 1;//Aakri Wall ko
	for (int i = 0; i < n; i++) {
		//Area according to the small wall out of 0th and the last wall

		area = max(area, (min(a[i], a[j])) * (j - i));

		if (a[j] > a[i]) {
			//aapne abhi max area kis wall ka nikala hain
			//ith wall ka nikala hain:
			i++;
		} else {
			//toh aapne area jth wall ka nikala hain:
			j--;
		}
	}
	return area;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << maxArea(a, n) << endl;
}