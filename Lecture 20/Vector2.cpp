#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string>v(n, " "); //Dynamic Array//iske ander size ko dedo
	for (int i = 0; i < n; i++) {
		// string x;
		// cin >> x;
		// v.push_back(x);
		cin >> v[i];
	}

	v.pop_back();

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}


// v[i]::? index maan lo vector??
//vector ko index mil gaye na?