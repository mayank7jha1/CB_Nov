#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

//Activities : Har ek activity ka st and et.

class Activity {
public:
	int Starting_Time;
	int Ending_Time;
};

Activity a[N];

bool compare(Activity a, Activity b) {

	if (a.Ending_Time == b.Ending_Time) {

		if (a.Starting_Time < b.Starting_Time) {
			return true;
		} else {
			return false;
		}
	}

	// return a.Ending_Time < b.Ending_Time;

	if (a.Ending_Time < b.Ending_Time) {
		return true;
	} else {
		return false;
	}
}

void Solve(int n) {
	sort(a, a + n, compare);

	//Sort maar diya hoga
	int ans = 1;
	int prev_ending_time = a[0].Ending_Time;

	for (int i = 0; i < n; i++) {
		if (a[i].Starting_Time >= prev_ending_time) {
			ans++;
			prev_ending_time = a[i].Ending_Time;
		}
	}

	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> a[i].Starting_Time >> a[i].Ending_Time;
		}
		Solve(n);
	}
}