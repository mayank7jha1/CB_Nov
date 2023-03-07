//Random numbers ko generate kar rahe ho based upon test case


#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	srand(time(0));

	int n = rand() % 1005;
	int m = rand() % 100005;

	// cout << n << " " << m << endl;


	//Random Numbers generate karne ke bahut tareeke hain

	//rand(): Aaapke liye random numbers ko generate karta hain

	// int a = -100 + rand() % 100 + 50;
	// cout << a << endl;

	//rand function using a seed :
	cout << n << " " << m << endl;
}

//cpp fast olympic coding