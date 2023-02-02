
#include<iostream>
#include "vector.h"
using namespace std;
const int N = 0;

int main() {
	int n;
	cin >> n;
	vector<string>v;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		v.push_back(x);
	}

	v.pop_back();

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}


//aap koi bhi container ke ander kitne bhi container
//bana sakte ho.