#include<bits/stdc++.h>
using namespace std;



bool compare(string x, string y) {
	string xy = x + y;//5627
	string yx = y + x;//2756;

	if (xy > yx) {
		return true;//STL of sort kuch mat karo.
	} else {
		return false;//Swap
	}
}


int main() {
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}


	sort(s, s + n, compare);

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
}


// two string add karna is easy: do number se:


// 56+27==5627(right)
// 56+27=83




/*


String s="Mayank";
String t="Samyak";

cout<<s+t<<endl;//S ke piche t ko add kardo.

Mayank+Samyak

MayankSamyak

+::: Append karne ka kaam karta hain.

Operator oveloading ka;

*/


/*
def make_comparator(less_than):
    def compare(x, y):
        if less_than(x, y):
            return -1
        elif less_than(y, x):
            return 1
        else:
            return 0
    return compare

sortedDict = sorted(subjects, cmp=make_comparator(cmpValue), reverse=True)

*/