#include<bits/stdc++.h>
using namespace std;
// const int N =0;

int main() {
	char ch[100004];//You always have to give the size of the character array.
	cin >> ch;

	string s;
	cin >> s;

	cout << ch << endl << s << endl;
	int n = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		n++;
	}
	cout << n << endl;

	cout << s.length() << endl;

	for (int i = 0, j = n - 1; i < j; i++, j--) {
		swap(ch[i], ch[j]);
	}
	cout << ch << endl;

	reverse(s.begin(), s.end());//.begin()::address of the first block
	//.end() address of the last block+1
	cout << s << endl;

	sort(ch, ch + n);
	cout << ch << endl;
	sort(s.begin(), s.end());
	cout << s << endl;

	// reverse(a, a + n);
	//Address of the first block
	//address of the last block +1 jaata hain agle argument:

	//STL::
	//1.Containers:Strings Maps
	//2.Algorithms:: sort,reverse
	//3.Iterators::


	//Jo bhi containers hote hain:: Aise DSA jo umhe nahi nahi
	//banane pade kyuki kisi aur ne tumhare liye using basic dsa usko bana rakha hain


	//Agar tumko containers par iterate karna hain to tumhe iterators ka use karna
	//padhta hain??

	//Iterators ek tarah se address store karne ka kaam karte hain.


	string m1 = "Mayank";
	string n1 = "Samyak";

	string t = m1 + n1;//+ sign is operator overloading


	//do integer hai to + dono ko add karta hain
	//do string hain + dono ko concatenate karta hain
	//+ sign ne different situation me different functionality lagyi issi ko hum
	//overloading bolte hai and since ye ek operator hain:
	//operator overloading bolte hain.
	cout << t << endl;
}


//H.W. String ke aur dusre function ko study karo khud se ::
//C++ Reference se: