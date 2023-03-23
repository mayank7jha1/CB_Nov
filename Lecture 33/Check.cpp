#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;


int a[N] = {0};
int b[N] = {0};

int main() {


	for (auto x : b) {
		x = x + 10;
	}

	for (int i = 0; i < N; i++) {
		cout << b[i] << " ";
	}

	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}


//C++: Codeforces: 10^8 Computations : 1 sec:

//Print karva rahe 10^8;

// O(2N);

//Space jada nahi lerahe mle