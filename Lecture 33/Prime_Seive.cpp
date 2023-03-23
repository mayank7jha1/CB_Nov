//Prime_Seive Time Complexity: O(n log (log n))

#include<bits/stdc++.h>
using namespace std;
const int N = 0;

// bool p[100000005] = {0};  //(10^7+5)*8 bits

//0 and 1 store

// int random[1e5];

//Space Complexity: O(10^7+10^5):

// bitset: Container bits ke form me store karta hain

//0 and 1.

bitset<100000005>p; //10^7+5 bits

//By default it is intialised with 0 only.

//This is 8 times more space optimised.

//O(n):

// bool ka size kya hain? 1 byte

void Prime_seive(int n) {

	for (int i = 3; i * i < n; i += 2) {
		if (p[i] == 0) {
			for (int j = i * i; j <= n; j += i) {
				p[j] = 1;
			}
		}
	}
	cout << 2 << " ";
	for (int i = 3; i <= n; i += 2) {
		if (p[i] == 0) {
			cout << i << " ";
		}
	}
}


int main() {
	int n;
	cin >> n;
	Prime_seive(n);
}