#include<iostream>
using  namespace std;
#include<queue>
#include<vector>
#include<bits/stdc++.h>




int main() {
	vector<int>v{1, 2, 3, 4, 5, 6};

	v.push_back(19);
	for (auto x : v) {
		cout << x << " ";
	}
	cout << endl;

	v.pop_back();

	for (auto x : v) {
		cout << x << " ";
	}
	cout << endl;

	cout << v.front();
	cout << endl;

	//pop_front();

	for (auto x : v) {
		cout << x << " ";
	}

	queue<int>q;

	for (int i = 0; i < v.size(); i++) {
		q.push(v[i]);
	}
	cout << endl;

	q.pop();

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}



}