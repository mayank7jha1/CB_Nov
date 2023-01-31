#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int Solve(int* x, int n) {
	//x=base address of array a;
	//x+1 address of first bucket
	//*(x+1)==value at the address of the first
	//bucket of a.
	//[]===value of:
	//x[1]== value at the first bucket of the
	//array a.

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += x[i];
	}
	return ans;
}


int main() {

	int a[] = {1, 2, 3, 4, 5};

	int n = sizeof(a) / sizeof(int); //::5*4=20/4

	cout << Solve(a, n) << endl;
	//a matlab kya hain?
	//address of array a.
	//address : aap reference ke through
	//bhej rahe ho:
	//jo bhi changes upar honge vo har jagah
	//honge kyuki ek new array nahi create hoga.

}