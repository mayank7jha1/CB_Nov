#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


void solve(int x, int y) {
	//x and y are reference variables
	x = x + 1;
	y = y + 1;
	cout << x << " " << y << endl;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << x << " " << y << endl;
	solve(x, y);
	cout << x << " " << y << endl;
}

//Pass by value:
//Elements ki scope hoti hain!!
