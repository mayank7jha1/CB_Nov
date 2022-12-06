#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	//Break and Continue:
	//Break: keyword : ye kya karega:: loop current: usko break kardega:
	//for------> compiler ka flow loop ke bahar aajayega.


	for (int i = 1; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		cout << i << " = " << "Mayank" << endl;
	}

	//cout << "Samyak" << endl;
}

//current pass hain loop ka usko skip kardeta::
//Nahi loop se bahar nahi aayega::
//current pass ko skip kardega";

// i = 10		Mayank;
// i = 2			Mayank;
// i = 3			Mayank;
// i = 4			Mayank;


// i = 5 main if ke ander jaaunga and then vaha flow loop ke bahar hogaya;
// i=6 occur nahi karegi!!