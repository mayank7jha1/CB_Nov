#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void Solve(char in[], char output[], int i, int j) {


	if (in[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	//First Character ko fix karna chahta hu: and Recursion se kaam karvao;
	//Second Character ko fix and recursion ko aage ka kaam dunga.
	//Thirst
	//Fourth

	int digit = in[i] - '0';

	for (int k = 0; keypad[digit][k] != '\0'; k++) {
		output[j] = keypad[digit][k];
		Solve(in, output, i + 1, j + 1);
	}
}

int main() {
	char in[1000];
	cin >> in;

	char output[1000];

	Solve(in, output, 0, 0);
}



//in[] = {"12"};

//1 Extract karo?
//Keypad ke me is 1 index par jaana chahta hu!.
//in[0]==1: character: ascii: 49:
//49 index par chale jaao keypad array me :
//49-48=1;
//Keypad me 1 index(1 index row:) par jaao:


//12:

//.a .b .c +a +b +c _ _ _ _ _