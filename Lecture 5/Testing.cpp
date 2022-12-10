#include<iostream>
using namespace std;
// const int N = 0;

int main() {
	char ch = 'A';
	cout << ch << endl;

	//Internally compiler: usko character ka meaning:
	//character are stored with their ascii value;

	char ch1 = 'B';
	char ch2 = ch1 + ch2;
	cout << ch2 << endl;

	//Type Casting:
	//cout << (char)ch + ch1 << endl;

	// ch1+ch==Integer:: char
	// 4 byte
	// 1 byte


	// Create tabhi uska type declare kardiya:
	// float x = 10.51;//Type Casting: Implicit Typecasting:

	// cout << (int) x << endl; //Whenever for a particular instance:
	// //aapko type ko redefine karna pade: explicit typecasting

	// //Ex:: ek statement:

	// cout << x << endl;


	// //Explicit Typecasting sirf bade bubble to small bubble hi kar sakte ho:

	// int x1 = 10;

	// cout << (float)x1 << endl;
}

//Single character are represented in the single quotes '';


// if have a larger range tabhi aap usko cut short karsakte ho:

// float::Integer+Decimal
// int:: Integer

// size:: 8 byte:
// 4 byte use kar rahe ho:


// 4 byte ka jo bucket uska 8 byte use kar rahe ho!!!