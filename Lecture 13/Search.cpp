//You Are a given an array you have to search an element in it.
//The element will be given to you by the user.

//Linear Search:
#include<bits/stdc++.h>
using namespace std;


bool Search(int a[], int i, int n, int key) {

	if (i == n) {
		return false;
	}


	if (a[i] == key) {
		return true;
	}

	return Search(a, i + 1, n, key);
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
	cout << Search(a, 0, n, key) << endl;
	cout << Search2(a, n, key) << endl;
}

//Address ke sath cheeze hosakti hain.
//Arrays are always passed by reference in c++.

//Agar tumne function banaya hain and uske ander array ko pass kiya hain
//toh same array par hi aap kaam kar rhae ho.


//Address kar saktu hu?