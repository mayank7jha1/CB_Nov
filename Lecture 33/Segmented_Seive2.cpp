#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10;

vector<int>primes;
bool p[N] = {0};

void Prime_seive() {
	for (int i = 3; i * i < N; i += 2) {
		if (p[i] == 0) {
			for (int j = i * i; j <= N; j += i) {
				p[j] = 1;
			}
		}
	}
	primes.push_back(2);
	for (int i = 3; i <= N; i += 2) {
		if (p[i] == 0) {
			primes.push_back(i);
		}
	}
}


void Segmented_Sieve(int a, int b) {
	int p1[b - a + 1] = {0};//This is a shifted array

	for (int i = 0; primes[i]*primes[i] <= b; i++) {

		int start = (((a / primes[i])) * primes[i]);

		if (start < a) {
			start += primes[i];
		}

		for (int j = start; j <= b; j += primes[i]) {
			p1[j - a] = 1;
		}

		//Overlap
		if (start == primes[i]) {
			p1[start - a] = 0;
		}
	}

	for (int j = a; j <= b; j++) {
		if (p1[j - a] == 0) {
			cout << j << endl;
		}
	}
	cout << endl;
}


int32_t main() {
	//Precomputation
	Prime_seive();

	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a == 1) {
			a++;
		}
		Segmented_Sieve(a, b);
	}
}

