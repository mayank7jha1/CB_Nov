#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	map<int, int>m;

	vector<int>v{1, 2, 3, 4, 5, 6, 7};

	for (auto x : v) {
		m.insert({x, x + 20});
	}

	//map ke ander kya 5 name ki key present hain?

	auto it = m.count(5);
	cout << it << endl;
	//Aap mujhe 5 ka address agar vo present hai toh

	//cout << (*it).second << endl;


	for (auto it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}


	//Agar aapko ye check karna hain ki element map me hain ki nahi
	//map me function hota hain find
	//set me function hota hain find count dono ka.


	if (m.find(x) != m.end()) {

	}

	if (m.count(x) == 1) {

	}

	//find function: m.end() return kardiya element is not present.
	//count==0
}