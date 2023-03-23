#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	int n;
	cin >> n;
	// set<int>s;
	unordered_set<int>s;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}

	if (s.count(32) == 1) {//Log(n)
		cout << "Yes" << endl;
	}

}