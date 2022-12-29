#include<bits/stdc++.h>
using namespace std;


void Solve(int a[], int n) {//Function Definition
	for (int i = 0; i < n; i++) {

		//Aap fix kar rahe ho subarray kaha se suru hoga:(i represents this);
		for (int j = i; j < n; j++) {

			//Ending Point of your Subarray.
			for (int k = i; k <= j; k++) {
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
}



int main() {
	int a[] = {1, 2, 3, 4, 5, 6};
	int n = 6;

	Solve(a, n);//Function Call
}



