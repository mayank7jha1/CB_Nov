#include<iostream>
using namespace std;
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<iterator>
#include<unordered_map>
#include<set>
#include<unordered_set>
//Hashmap:: unordered_map


const int N = 0;

int main() {

	int n;
	cin >> n;
	// vector<int>v;
	vector<int>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	for (int x : v) {
		cout << x << " ";
	}
	cout << endl;

	// vector<int>::iterator it;
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << (*it) << " ";
	}
	cout << endl;

	map<int, int>mp;
	//Ordered Map:
	//Searching,Insertion,Deletion in O(log n)
	//Key Value ka Pair



	unordered_map<int, int>mp1;
	//It will use the technique of Hashing
	//Searching is in O(1) time.
	//Keys are not Sorted.

	//Insert:

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		// pair<int, int>p = {x, y};
		// mp.insert(p);

		mp.insert({x, y});
		mp1.insert({x, y});

		//mp.insert(make_pair(x, y));
	}

	cout << endl;
	//auto: pair<int,int>
	for (auto x : mp) {
		//Ye x kya hain? Pair
		// pair<int, int>p = x;
		// cout << p.first << " " << p.second << endl;
		cout << x.first << " " << x.second << endl;
	}

	cout << endl;
	// map<int, int>::iterator it;

	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;


	for (auto x : mp1) {
		//Ye x kya hain? Pair
		// pair<int, int>p = x;
		// cout << p.first << " " << p.second << endl;
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for (auto it = mp1.begin(); it != mp1.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;

	set<int>s;

	//Unique Elements deta hain and Sorted Data:
	//Log(n);

	unordered_set<int>s1;
	//Unique Elements but sorted par nahi.
	//O(1).

	int ans[] = {1, 2, 2, 3, 43, 45, 5, 5, 5, 6, 4, 4, 5, 6, 7, 7, 8, 9, 8, 8};

	for (auto x : ans) {
		s.insert(x);
	}

	for (auto x : s) {
		cout << x << " ";
	}
	cout << endl;

	//Sorted/Unique : Lower_Bound and Upper_Bound funtion.

}




//CP: Collision



