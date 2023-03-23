#include<bits/stdc++.h>
using  namespace std;

int main() {
	stack<int>st;

	vector<int>v{1, 2, 3, 4, 5, 5, 6};

	for (int i = 0; i < v.size(); i++) {
		st.push(v[i]);
	}

	//Reverse print karna hain

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();//top ka element remove
	}
}


//String
//Vector
//Map
//Set
//Priority Queue
//Queue
//Stack

//Time Complexity pata honi