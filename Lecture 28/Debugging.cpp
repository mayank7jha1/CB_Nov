#include<bits/stdc++.h>
using namespace std;
const int N = 0;

#ifndef ONLINE_JUDGE
#define dbg(x) cerr<<#x<<" ";__Print(x); cerr<<endl;
#else
#define dbg(x)
#endif

void __Print(int x) {
	cerr << x << " ";
}
void __Print(double x) {
	cerr << x << " ";
}
void __Print(long long x) {
	cerr << x << " ";
}
void __Print(char x) {
	cerr << x << " ";
}
void __Print(bool x) {
	cerr << x << " ";
}
void __Print(string x) {
	cerr << x << " ";
}


template<class T>void __Print(vector<T>v) {
	cerr << "[ ";
	for (T x : v)
	{
		// cerr << x << " ";
		__Print(x);
	}
	cerr << "]";
	//cerr << endl;
}


template<class T>void __Print(set<T>v) {
	cerr << "[ ";
	for (T x : v)
	{
		// cerr << x << " ";
		__Print(x);
	}
	cerr << "]";
	//cerr << endl;
}
int main() {
	int a = 10;


	//cout << a + 20 << endl;
	//Now what i want is main error.txt


// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif


	//cerr << " " << endl;

	//cerr << a << endl;
	dbg(a);
	string x = "Mayank";
	dbg(x);

	vector<int>v{1, 2, 3, 4, 5};
	dbg(v);

	// __Print(v);
	vector<string>s1{"bjvbxcv", "vbn vcn", "jvjbxjcv"};
	dbg(s1);

	set<int>s2;
	s2.insert(123);
	s2.insert(231);
	dbg(s2);

	cout << "amaynk";

}


//Codeforces: Online judge hota:

