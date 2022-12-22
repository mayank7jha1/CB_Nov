#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

//Comparators hote : True/False(Syntax)

bool compare(int x, int y) {
	//Comparators: Sort Function jo hain STL Ke ander :

	//Bubble sort of stl ko ki aapko swap karna hain ki nahi karna hain
	//Agar aapka compare function return true that means ye kehta hain ki swap
	//aapko nahi karni. Agar true return hua that means aapko kuch nahi karna.
	//Faslse return hua to aapko swap karna hain.

	if (x < y) {
		return true;//STL ko kuch nahi karna.
	} else if (x >= y) {
		return false;//Swap kardo.
	}

	//C++ reference

}

//Sort STL:: (Bubble Sort+Merge Sort+ Different )//FAStest SOrting

//Bubble Sort STL Ke ander use horaha hain;

/*
	f(){
		f(){
			//JO element sabse bada hai usko last me daal do.

			Adjacent do element ko compare karte the:

			a[j]>a[j+1]{
				swap;//AScending Order
			}
		}
	}
*/


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	string s;
	cin >> s;

	sort(a + 0, a + n, compare); //Asc.

	//sort(s.begin(), s.end());//Asc.(String: Dictionary)

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	//cout << s << endl;

}

