#include<iostream>
using namespace std;


int main() {
	int n;//Size of the array;
	cin >> n;

	int a[n];

	//Iterate over the array
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	int key;
	cin >> key;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	//Array me koi element ko search karna hain.
	int flag = 500;

	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			//Kya mujhe kisi tarah ye pata chal sakta hain ki main is if
			//condition me aaya hu ki nahi??

			//Agar element mil jaata hain: toh main  flag ki value
			//ko change kar dunga:
			flag = 100;
			//cout << "Yes" << endl;
		}
		//cout << "No" << endl;
	}

	//Jab main loop se baahar aaya to main flag ki value se
	//ye pata kar sakta hu ki element mila ki nahi.

	if (flag == 500) {
		//Aaap kabhi bhi if vaaale block me nahi gaye
		//agar aap if vaale block me nahi gaye to element nahi mila
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}


	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; //{}represent multiple elements
	//a[0]=1;
	//a[2]=3;//arrays ki indexing zero :
	//base address+0; a[0]=1;
}

