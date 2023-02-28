#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long

bool compare(pair<int, pair<int, int>>p1, pair<int, pair<int, int>>p2) {
	return p1.second.first < p2.second.first;
}

bool compare1(pair<int, pair<int, int>>p1, pair<int, pair<int, int>>p2) {
	return p1.first < p2.first;
}


int32_t main() {
	int n;
	cin >> n;

	vector<pair<int, pair<int, int>>>a, b;

	//a is for the sequence x1<x2
	//b is for the seqeunce when x1>x2

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x < y) {
			a.push_back({x, make_pair(y, i + 1)});
		} else {
			b.push_back({x, {y, i + 1}});
		}
	}


	// for (auto x : a) {
	// 	int x1 = x.first;
	// 	pair<int, int>y = x.second;
	// 	int y1 = y.first;
	// 	int index = y.second;

	// 	cout << index << " ";
	// }

	//Vector ka nuksan i am not find out ki element konse index
	//par hain o(1).

	if (a.size() > b.size()) {
		sort(a.begin(), a.end(), compare);//decending me sort karna hain based on second value
	} else {
		sort(b.begin(), b.end(), compare1);//ascending me sort karna hain based on first value
	}


	if (a.size() > b.size()) {
		cout << a.size() << endl;
		for (auto x : a) {
			int x1 = x.first;
			pair<int, int>y = x.second;
			int y1 = y.first;
			int index = y.second;

			cout << index << " ";
		}
	} else {
		cout << b.size() << endl;

		for (auto x : a) {
			int x1 = x.first;
			pair<int, int>y = x.second;
			int y1 = y.first;
			int index = y.second;

			cout << index << " ";
		}
	}
}




//Index: jo pair aap bana rahe ho vo konse index par hain.