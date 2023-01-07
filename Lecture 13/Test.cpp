#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


void Solve(int a[], int n) {

	for (int i = 0; i < n; i++) {
		a[i] = a[i] + 10;
	}
	cout << "Inside the Function " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl << endl;
}

void Solve2(string &s) {
	s[0] = 'z';
	cout << "Inside the Function " << endl;
	cout << s << endl << endl;
	return;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	Solve(a, n);
	cout << "Inside the Main " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << endl << endl;;
	string s = "Mayank";
	Solve2(s);
	cout << "Inside the Main " << endl;
	cout << s << endl << endl;
}




