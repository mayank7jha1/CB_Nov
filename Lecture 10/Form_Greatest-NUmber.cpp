#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}


	sort(a, a + n);//Asc.Number ke basis
	sort(s, s + n);//Asc.//Dictionary


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
}