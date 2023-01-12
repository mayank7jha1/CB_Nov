#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
int n;


void String_Equivalence(char output[], int i, int Max_character) {

	if (i == n) {
		output[i] = '\0';
		cout << output << endl;
		return;
	}


	for (char ch = 'a'; ch <= Max_character; ch++) {
		output[i] = ch;

		//Agar maine Is Stage ka max character le liya hain
		//toh next stage ka max character ab +1 se badh jaayega
		//nahi to same rahega;

		if (ch == Max_character) {
			String_Equivalence(output, i + 1, Max_character + 1);
		} else {
			String_Equivalence(output, i + 1, Max_character);
		}
	}
}

int main() {
	cin >> n;
	char output[1000];

	String_Equivalence(output, 0, 'a');
}


// N = 3:   _  _  _


//     1st Bucket: a:
//     2nd Bucket: a / b:
//     3rd Bucket: a / b / c:

//     a a / b a / b / c


//     a a _:
//     a a a:
//     a a b:
//     THird BUcket ke liye max Max_character=b:


//     second bucket ka max Max_character = b;


//     a b _c (Max Max_character=c):
//     a b a         a b b           a b c




//Type: Intuition: Storing ke part: options:

//two options: op1 op2:

//for loop:  (first bucket ke liye fix:

//second )