//Substring function:

//Mayank:

//yank and ank :: Mnk

#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
//Inbuilt function in c++, this function basically prints/fetches you the
	//substring of desired length.

	string s = "Mayank";

	s = s + "tz";
	cout << s << endl;

	s.push_back('z');//Push_Back in string, we can
	//append only one character.
	cout << s << endl;


	string t = "Helzo0oooooo";
	//h=0
	//e=1
	//l=2

	cout << t.substr(2) << endl;

	for (int i = 2; i < t.length(); i++) {
		cout << t[i];
	}
	cout << endl;

	cout << t.substr(4, 3) << endl;//4 5 6
	//1st index se suru karke, next two characters
	//laake do.

	//Loop ke through:

	int start = 1;
	for (int i = start; i <= start + 3; i++) {
		cout << t[i];
	}


}

//Container: functions:
//.

//substr();

