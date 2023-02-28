#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long


int Solve(string &x) {
	int ans = 0;
	int count = 0;
	for (int i = 0; i < x.size(); i++) {
		if (x[i] == 's') {
			count++;
		} else if (x[i] == 'h') {
			//matlab count jine s piche the is current h ke so add kardo

			ans = ans + count;
		}
	}
	return ans;
}

bool compare(string &x, string &y) {

	//xy=x+y;
	string xy = x + y;
	string yx = y + x;

	//Function Solve which gives us ki xy ya yx inme se kisme jada
	//s banange piche of h.

	if (Solve(xy) > Solve(yx)) {
		return true;
	} else {
		return false;
	}
}

int32_t main() {
	int n;
	cin >> n;
	// string s[n];
	vector<string>s;
	string x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s.push_back(x);
	}

	sort(s.begin(), s.end(), compare);
	string ans = "";
	for (int i = 0; i < n; i++) {
		ans = ans + s[i];
	}

	cout << Solve(ans) << endl;
}


