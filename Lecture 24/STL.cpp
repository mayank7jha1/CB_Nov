#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using  namespace std;

int main() {



	// vector<int>v{1, 2, 3, 4, 5, 6};

	// vector<int>z = v;//Containers ko aap match karva sakte ho

	// vector<int>t(v.begin(), v.end());

	// int n;
	// cin >> n;
	// vector<int>m;

	// for (int i = 0; i < n; i++) {
	// 	int x;
	// 	cin >> x;
	// 	v.push_back(x);
	// }

	// vector<int>o(n);

	// for (int i = 0; i < n; i++) {
	// 	cin >> o[i];
	// }

	// vector<int>a(5, -1);//5 size and -1 usse initialise karo har element ko.



	// int a[][]

	int n, m;
	cin >> n >> m;

	// vector<vector<int>>v;

	// for (int i = 0; i < n; i++) {
	// 	vector<int>ans;
	// 	for (int j = 0; j < m; j++) {
	// 		int x;
	// 		cin >> x;
	// 		ans.push_back(x);
	// 	}
	// 	v.push_back(ans);
	// }

	//vector<vector<int>>v(n);

	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		int x;
	// 		cin >> x;
	// 		v[i].push_back(x);
	// 	}
	// }




	vector<int>v = {1, 2, 3, 4, 5};

	// t.pop_back();

	// for (auto x : t) {
	// 	cout << x << " ";
	// }



	v.push_back(15);//15 ko copy karega and then vector ke anderr daalega
	v.emplace_back(30);//Copy nahi karega
	for (auto x : v) {
		cout << x << " ";
	}






}