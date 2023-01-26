#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {


	int x = 10;
	int* xptr = &x;

	int y = 30;
	int* yptr = &y;


	cout << &y << endl;
	cout << yptr << endl;

	cout << *(&y) << endl;
	cout << *yptr << endl;


	cout << *(&yptr) << endl;
	cout << &(*yptr) << endl;

	int**zptr = &yptr;

	cout << zptr << endl;
	cout << *zptr << endl;
	cout << &zptr << endl;

}