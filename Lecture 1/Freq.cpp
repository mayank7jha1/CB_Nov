#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

//Global array banaya : maximum size of the array can be:: 10^7/10^8

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	//Array hota hain ye aapka index aur us index
	//par jo value hain uska map create karta hain.


	int freq[10005] = {0}; //You create the maximum size array that is possible

	//jo bhi maximum element hain array me vahi
	//aakhri block hoga freq array ka jo mujhe fill karna hain??



	//Kaam : frequency array banana hain jisme
	//hum element of array and uski frequency ka
	//map create karna hain.


	//Iterate over the initial array:

	for (int i = 0; i < n; i++) {
		//Update the frequency in the frequency array
		freq[a[i]] = freq[a[i]] + 1;
	}


	//Print:

	//Print karna hain frequency array:
	//Toh kya main saari values, values se mera matlab element hain
	//nahi mujhe bas array a ke values ki frequency chahiye.

	for (int i = 0; i < 10005; i++) {
		if (freq[i] > 0) {
			//Is element ki frequency array a me hain:
			//toh mujhe isse print karna hain.
			cout << "Frequency of element " << i << " is " << freq[i] << endl;
		}
	}
}

//inside main banana hain: 10^5/10^6~~~10^5