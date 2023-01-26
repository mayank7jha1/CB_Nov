#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	// int n;
	// cin >> n;
	// cout << &n << endl;
	// int a[] = {1, 2, 3, 4, 5};
	// cout << &a << endl;
	// cout << &a[0] << endl;
	// cout << &a[1] << endl;


	int x = 20;
	//int y = 30;

	int *xptr = &x;

	cout << &x << endl;
	cout << xptr << endl;

	cout << *(&x) << endl;
	cout << *xptr << endl;

	int y = 30;
	int *yptr = &y;

	cout << &yptr << " " << *yptr << " " << &y << endl;

}