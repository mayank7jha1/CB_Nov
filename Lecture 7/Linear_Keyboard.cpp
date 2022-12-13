#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {//1000(49+26)::(75000)<<<<<<<<<<10^8;
		string keyboard, word;
		cin >> keyboard >> word;


		int mapping[256] = {0};//Size kitna hoga! ascii 256


		//You have to create a mapping for the keyboard.
		int n = keyboard.size();
		//n=26;
		for (int i = 0; i < n; i++) {
			mapping[keyboard[i]] = i + 1; //26 Computation
		}

		int ans = 0;
		//word par iterate karo and calculate the answer

		for (int i = 0; i < word.size() - 1; i++) {
			ans = ans + abs(mapping[word[i]] - mapping[word[i + 1]]);//49
		}
		cout << ans << endl;//49+26
	}
}


// word: hello:

// (mapping[h] - mapping[e])+(mapping[e] - mapping[l])+(mapping[l] - mapping[l]) +
// (mapping[l] - mapping[o])+(mapping[o] - ?? ? )


// abcdefghtuio--------

// mapping[97]=1;  a=1
// mapping[98]=2;	b=2
// mapping[99]=3;  c=3
// mapping[100]=4; d=4
// mapping[101]=5; e=5
// mapping[102]=6, f=6
// mapping[103]=7,



// decba------
// keyboard[0] = d;

// mapping[100] = 1;

// mapping[100]=1; d=1
// mapping[101]=2, e=2