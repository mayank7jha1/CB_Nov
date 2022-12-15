#include<bits/stdc++.h>
using namespace std;
int k, n;
string s;

int Solve(char x) {
	//First Try: b->a:  niche s x aaraha x='a';
	//Agar string me a hain toh aapko kuch nahi karna
	//agar string ka character x character se match karta hai
	//toh aapko kuch nahi karna:

	int ans = INT_MIN;
	//This will contain my maximum substring ans
	//for a particular try.

	int i = 0;
	int count = 0;
	//Ye count karta hain hain ki aapne kitni bar
	//operation perform kiya hain.

	//Iterating over the string:
	for (int j = 0; j < n; j++) {
		if (s[j] != x) {
			//Agar s[i] : string ka character is
			//not equal to x i.e if we are talking about
			//first try: x=a;
			//agar string ka character is not equal to
			//a then you have to do something


			//You have to perform the operation:
			//Or Assume that you have performed the operation
			count++;
		}

		//count >k that means you have performed the operation
		//more number of times that that is advised in the
		//question.
		//Window ko shrink karna hain
		//Ki aapko abhi jo current window hain usme se
		//ek operation ko kam karna padega.

		//aapko i ko aage badana hain

		while (count > k and i <= j) {//Window -ve nahi honi chahiye:
			//origin of window can never excceed the end of window

			//Pehle toh aapko i ko aage badana hain:
			//i ko aage badhate time aapko kabtak badana hain
			//jabtak aapko x ke opposite character nahi nahi milta

			//tabtak aap i ko badhao:

			//First try ki baat kar rahe hain:: x=a:
			//jabtak aapko current window me b nahi milta tab tak
			//aap i ko badhao:

			if (s[i] != x) {
				count--;
			}
			i++;
		}

		//App window ki length ko update karte raho:

		if (j - i + 1 > ans) {
			//Aap abhi jis window par khade ho uski length
			//apke previous window ki length se badi
			//aachuki hain that means you have
			//to store this ans.
			ans = j - i + 1;
		}
	}
	return ans;
}


int main() {
	cin >> n >> k;
	cin >> s;

	//First Try:: Converting b->a;
	int ans = Solve('a');


	//Second Try: Converting a->b;
	int ans1 = Solve('b');

	cout << max(ans, ans1) << endl;
}