#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string c;
		cin >> c;

		int freq[26] = {0};

		for (int i = 0; i < c.length(); i++) {
			if (c[i] == c[i + 1]) {
				i++;
			} else {
				freq[c[i] - 'a']++;//freq[0]==a
				//This is your correct keys.
			}
		}

		for (int i = 0; i < 26; i++) {
			if (freq[i] > 0) {
				cout << (char) (i + 'a');//freq[i]>0: i=0: 0+'a'=0+a=97
			}
		}
		cout << endl;
	}
}