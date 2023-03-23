#include<iostream>
using  namespace std;
#include<bits/stdc++.h>
int main() {
	//Frequency Array;

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	map<int, int>mp;
	unordered_map<int, int>ump;

	set<int>s;
	unordered_set<int>us;

	//Frequency  of every element:
	//Map : By dafault har value zero:
	//key banayega and usko initialise karega zeero se.

	for (int i = 0; i < n; i++) {
		mp[a[i]]++;
		ump[a[i]]++;
		s.insert(a[i]);
		us.insert(a[i]);
	}

	// for (auto x : mp) {
	// 	cout << x.first << "->" << x.second << endl;
	// }

	// cout << endl;

	// for (auto x : ump) {
	// 	cout << x.first << "->" << x.second << endl;
	// }


	// cout << endl;

	// for (auto x : s) {
	// 	cout << x << " ";
	// }


	// cout << endl;

	// for (auto x : us) {
	// 	cout << x << " ";
	// }


	int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 11, 14, 15};


	auto value = lower_bound(b, b + n, 15) - b;
	cout << value << endl << endl;
	auto m = s.lower_bound(14);
	cout << *m << endl;

}


// (STL: Question Plus Trees + Greedy)

//k-travel cards
//ipc trainers
//sttadium  and games
//trees : LCA and Ktth node and trree camera
//sttack and queue
//priority queeue


//circular  queue
//Greedy kareenge.

//Segmenteed Sieve and  Matth and string matching






