#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	string s;
	cin >> s;

	sort(a + 0, a + n);//Arrays jo hain vo aapka stl nahi hain.

	//String ko sort karte hain:

	sort(s.begin(), s.end());

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << s << endl;


	reverse(a, a + n);
	reverse(s.begin(), s.end());

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << s << endl;

}


// STL: string isko container:

// iterate :
// iterator:

// STL:    .begin()::: This gives me address of the first block:
// .end()::::This gives me address of the the block that is one block ahead of last block.


// STL::    [a+0,)