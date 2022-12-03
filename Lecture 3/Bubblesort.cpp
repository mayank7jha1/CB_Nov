#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

// n elements: n - 1 times max. element ko nikalna padega aur uski correct position par daalna
// 	padega.


	for (int i = 0; i < n - 1; i++) { //No of passes n , n-1 times max element ko nikalna:
		//n-1 times maximum element ko uski correct posittion

		//why because in the last pass, there will be only single element
		//left

		//put the respective max to its correction position by comparing
		//it to its adjacent elements;



		//agar main bolu ki tumhe first maximum nikalna hain??

		for (int j = 0; j < n - 1 - i; j++) { //j<n //maximum element ko aakhari me pahuchata hain
			//nahi  why because:

			//5 4 3 9 2:

			//1st pass me :: 5 & 4 , 5 & 3,5 & 9,9 & 2,9?????
			//4 3 5 2 9:
			//2nd pass : 4 & 3 , 4 & 5, 5 & 2, (5&9)
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}