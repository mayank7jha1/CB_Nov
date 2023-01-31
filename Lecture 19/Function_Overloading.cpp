#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int sum(int x, int y) {
	return x + y;
}

double sum(double x, int y) {
	return x + y;
}

int main() {
//OVerloading : ek ki banda multiple situation me
	//multiple kaam kar rha hain.
	cout << sum(10, 20) << endl;

	cout << sum(10.2, 20) << endl;

}