#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10;

vector<int>primes;
bool p[N] = {0};

//Prime number hain usko 0 kar rahe hain
//nahi hain toh 1 kar rahe hain

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
	//p1[0]===a
	//p1[1]==a+1
	//p1[2]==a+2


	//Aapka kaam hain Primes array par iterate karo
	//and jab tak aapka (primes[i]^2)<=b tak tab tak
	//har primes[i] par jao and a-b ki range me cutt
	// karte raho numbers ko

	for (int i = 0; primes[i]*primes[i] <= b; i++) {
		//Range me pehla number konsa hain jisko current primes[i]
		//cut karega

		int start = (((a / primes[i])) * primes[i]);

		if (start < a) {
			start += primes[i];
		}

		//29----96:
		//29=0 index in p1 array
		//30=1
		//31=2
		//32=3
		//33=4
		//96 is last index i.e 66 index in p1 array

		for (int j = start; j <= b; j += primes[i]) {
			p1[start - a] = 1;
		}

		//Overlap
		if (start == primes[i]) {
			p1[start - a] = 0;
		}
	}

	for (int j = a; j <= b; j++) {
		if (p[j - a] == 0) {
			cout << j << endl;
		}
	}
	cout << endl;
}

// primes[2]=5;

//start=(5/5)*5=5;
//start=5;
//
//a=5
//b=96

int32_t main() {
	//Precomputation
	Prime_seive(); //O(n): in range 1-10^6

	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a == 1) {
			a++;
		}
		// if (a == 2) {
		// 	cout << 2 << endl;
		// }
		// if (a % 2 == 0) {
		// 	a = a + 1;
		// }
		// for (int i = a; i <= b; i += 2) {
		// 	if (p[i] == 0) {
		// 		cout << i << endl;
		// 	}
		// }
		// cout << endl;
		Segmented_Sieve(a, b);
	}
}


//m=10^9: 10^12:

//10^15---->10^15+10^7;

//User: 10^8---->10^8+10^5;

//Array: 10^8:

//10^8: ek array use karlo:
//10^5 --->20


//Range me prime: 350 - 450
//prime numbers hain 1-10^6: 10^12
//First prime number se suru karo and