#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void Solve(char ch[], int i) {//character array always end will null character

	if (ch[i] == '\0' or ch[i + 1] == '\0') {
		//Either you are at null or you are at last character
		return;
	}

	//Task:
	if (ch[i] == 'p' and ch[i + 1] == 'i') {
		//Poori string ko pi ke baad se 2 kadam aage shift karo.

		for (int j = strlen(ch); j >= i + 2; j--) {
			ch[j + 2] = ch[j];
		}

		ch[i] = '3';
		ch[i + 1] = '.';
		ch[i + 2] = '1';
		ch[i + 3] = '4';
	}


	Solve(ch, i + 1);
}



int main() {

	char ch[100];//Arrays are passed by reference
	cin >> ch;


	Solve(ch, 0); //Character array par iterate bhi to karna hain.
	cout << ch << endl;
}



// _ _ _ _ _ _____




//pipipi
// :3.143.143.14::

//pipii:
//3.143.14i