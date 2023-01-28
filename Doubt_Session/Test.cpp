#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int a[] = {11, 23, 42, 111, 123, 999};
	int n1 = 6;
	//Binary Search:O(logn)
	cout << lower_bound(a, a + n1, 56) - a << endl; //return karega address of the
	//first block that is greater than or equal to the element
	//56 inside the array a.

	cout << upper_bound(a, a + n1, 111) - a << endl;
	//strictly greater than value:


	//binary_search(): true /false if the element is present or not


	cout << binary_search(a, a + n1, 111) << endl;


	//log n time me kya aap kisi ek element ka frequency nikal
	//sakte ho?


	int b[] = {11, 22, 33, 33, 33, 33, 33, 33, 33, 44, 55};
	int n = 11;
	cout << upper_bound(b, b + n, 33) - lower_bound(b, b + n, 33) << endl;

	//Log(n):frequency kisi ek element ki:
}