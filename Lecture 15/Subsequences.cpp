#include<bits/stdc++.h>
using namespace std;


void Subsequences(char in[], char output[], int i, int j) {

	if (in[i] == '\0') {
		output[j] = '\0';//Character arrays always end with a NULL character.
		cout << output << endl;
		return;
	}

	//Task Kya hain: Mujhe ek bar element ko lena hain and
	//ek bar element ko nahi nahi and when i am taking the element
	//store jarur karvana.


	//We are not Taking the element:
	Subsequences(in, output, i + 1, j);

	//We are taking the element:
	output[j] = in[i];
	Subsequences(in, output, i + 1, j + 1);
}



int main() {
	char in[1000];
	cin >> in;

	char output[1000];//Ye array output ko individually store karega;

	Subsequences(in, output, 0, 0);
}


//It Doesn't make sense to return a array? WHy because arrays are passed by reference: