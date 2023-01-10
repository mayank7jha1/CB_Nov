#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void bubblesort(int a[], int i, int n) {

	if (i >= n) {
		return;
	}

	//Task kya hain:
	for (int j = 0; j < n - 1 - i; j++) {
		if (a[j] > a[j + 1]) {
			//i+1 for last element does not exist.
			swap(a[j], a[j + 1]);
		}
	}

	bubblesort(a, i + 1, n);
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bubblesort(a, 0, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}




//Bubble sort: Recursion:


//Task: we tell recursion how to put the largest element to the
//end.

//Put the second largest and so on!.

//You should never prefer recursion, if you can write down the
//iterative approach.

//Bubble sort using recursion.

//last element:max element :