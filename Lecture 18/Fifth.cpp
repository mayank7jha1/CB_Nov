#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void Function(int* x, int* y) {


	*x = *x + 1;
	*y = *y + 1;

	cout << "Second Statement: " << *x << " " << *y << endl;
}

void Function2(int &x, int &y) {//New x and y are not created:


	x = x + 1;
	y = y + 1;

	cout << "Second Statement: " << x << " " << y << endl;
}



int main() {
	int x, y;
	cin >> x >> y;

	cout << "First Statement: " << x << " " << y << endl;


//	Function(&x, &y);//Pass by reference

	Function2(x, y);//Reference Variable

	cout << "Third Statement: " << x << " " << y << endl;//Pass by value
}