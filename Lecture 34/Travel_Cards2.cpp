#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long

int Travel_Cards() {
	int n, a, b, k, f;
	cin >> n >> a >> b >> k >> f;

	map<pair<string, string>, int>mp;

	string prev_dest = "";

	for (int i = 0; i < n; i++) {

		string start_dest, ending_dest;
		cin >> start_dest >> ending_dest;
		int price;

		if (prev_dest == start_dest) {
			//This is a Transhipment
			price = b;
		} else {
			price = a;
		}

		prev_dest = ending_dest;

		if (start_dest > ending_dest) {
			swap(start_dest, ending_dest);
		}

		if (mp.find({start_dest, ending_dest}) != mp.end()) {
			mp[ {start_dest, ending_dest}] += price;
		} else {
			mp[ {start_dest, ending_dest}] = price;
		}
	}

	vector<int>ans;
	int total_cost = 0;

	for (auto x : mp) {
		pair<string, string> trip = x.first;
		int cost = x.second;

		ans.push_back(cost);
		total_cost += cost;
	}


	sort(ans.begin(), ans.end(), greater<int>());


	for (int i = 0; i < k; i++) {
		if (ans[i] >= f) {
			total_cost = total_cost - ans[i] + f;
		} else {
			break;
		}
	}

	cout << total_cost << endl;

}

int32_t main() {
	Travel_Cards();
}