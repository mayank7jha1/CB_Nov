#include<bits/stdc++.h>
using namespace std;
const int N = 0;

void swap1(int* x, int* y) {
	swap(*x, *y);
}



void swap2(int &x, int &y) {
	swap(x, y);
}

int main() {
	int x = 10;
	int y = 20;

	int z = 200;
	int w = 300;

	swap1(&x, &y);

	cout << x << " " << y << endl;

	swap2(z, w);
	cout << z << " " << w << endl;
}