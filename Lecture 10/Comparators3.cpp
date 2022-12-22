#include<bits/stdc++.h>
using namespace std;


bool compare(int x, int y) {
	if (x > y) {
		return true;//STL ko kuch nahi karna.
	} else if (x <= y) {
		return false;//Swap kardo.
	}
}


//Particular sorting karna chahte ho.

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	string s;
	cin >> s;

	sort(a + 0, a + n, compare); //Asc.

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

}

