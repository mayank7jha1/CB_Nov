#include<bits/stdc++.h>
using namespace std;
const int N = 0;
int n;

void merge(int a[], int s, int e) {
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;

	int k = s;
	int temp[100];

	while (i <= mid and j <= e) {
		if (a[i] <= a[j]) {
			temp[k] = a[i];
			k++, i++;
		} else {
			temp[k++] = a[j++];
		}
	}

	while (i <= mid) {
		temp[k++] = a[i++];
	}

	while (j <= e) {
		temp[k++] = a[j++];
	}


	for (int i = 0; i <= n; i++) {
		a[i] = temp[i];
	}

}


void mergesort(int a[], int s, int e) {
	if (s >= e) {
		return;
	}

	//Divide:(Jab tak divide kar sakte ho kardo.)
	int mid = (s + e) / 2;
	mergesort(a, s, mid);
	mergesort(a, mid + 1, e);


	//Main merge karna sikha deta hu after all the division.

	merge(a, s, e);


}


int main() {

	cin >> n;
	int a[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	mergesort(a, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}


// Time Complexity: O(nlogn);



