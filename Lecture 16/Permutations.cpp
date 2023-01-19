#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void Permute(char a[], int i) {

	if (a[i] == '\0') {
		cout << a << endl;
		return;
	}


	for (int j = i; a[j] != '\0'; j++) {
		swap(a[i], a[j]);
		Permute(a, i + 1);

		swap(a[i], a[j]);//Backtracking
	}
}


int main() {
	char a[1000];
	cin >> a;
	Permute(a, 0);
}