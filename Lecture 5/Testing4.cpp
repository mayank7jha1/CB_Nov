#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	//char a[100];
	// char ch;

	// int i = 0;
	// while (cin >> ch) {
	// 	a[i] = ch;
	// 	i++;
	// }

	// for (int j = 0; j < i; j++) {
	// 	cout << a[j] << " ";
	// }

	//RObust:

	//Collection of characters milega as input
	//I should be able to take them as input directly

	// cin:: ke sath aap character array ka directly input:

	// cin >> a;
	// cout << a << endl;

	// //Internally toh ye array ke form me hi store horaha hain na!

	// //Character arrays are always ending with null character.

	// //Because since i want to find the size of array
	// //this null character acts as stopping point.


	// for (int i = 0; size of the array a tak; i++) {
	// 	cout << a[i] << " "
	// }

	char a[] = {'a', 'b', 'c', 'd', '\0'};

	cout << a << endl;

	for (int i = 0; a[i] != '\0'; i++) {
		cout << a[i] << endl;
	}

	char ch[8];//Make sure always initialise your array
	//with a size +1 greater than the input
	//because the the compiler has to put null character at the end.
	cin >> ch;
	cout << ch << endl;

	for (int i = 0; ch[i] != '\0'; i++) {
		cout << ch[i] << " ";
	}

//Collection of character:

	// "":: Collection of character or whitespaces
	// '':: Single character

	char a1[] = {"abcd\0"};//Yes this is also correct:
	//""YOu are talking collection of character:
	//You don't need null character:\

	cout << a1 << endl;


	//Iterate karoge :: NULL jaise hi aapko null mila aap stop:


	// int nitesh[100] = {0};
	// cout << nitesh << " ";
	// //Address of the array named as nitesh
	// //What do i mean from this is, it will give me the address of the
	// //first block or nitesh[0] or the base address of the array.

	// char nitesh[100];
	// cout << nitesh << endl;
	//Poora array:


	//Operator Overloading ::

	// << :: apni functionality ko change according to the
	//type of array:

	//Overloading:: ek hi cheez do kaam karegi depending upon
	//different situation
	//Operator:: operator overloading


	//character array size:
	cout << strlen(a1);


}