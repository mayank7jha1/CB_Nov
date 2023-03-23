#include<iostream>
#include<queue>
using  namespace std;

int main() {
	priority_queue<int>Maxi;
	priority_queue<int, vector<int>, greater<int>> Mini;

	int a[] = {3, 2, 1, 4, 5, 9, 1, 2, 3};

	//push: element ko pq me daalta hain.
	//pop: Jo root node usko remove kardo
	//Heap vo firse heapify hoga

	//top: Root node of a tree
	int n = sizeof(a) / sizeof(int);
	//cout << n << endl;

	for (int i = 0; i < n; i++) {
		Maxi.push(a[i]);
		Mini.push(a[i]);
	}

	// cout << Maxi.top() << endl;
	// Maxi.pop();

	// cout << Maxi.top() << endl;


	//O(nlogn)

	while (!Maxi.empty()) {
		int x = Maxi.top();
		cout << x << " ";
		Maxi.pop();
	}

	cout << endl;

	//O(nlogn)

	while (!Mini.empty()) {
		int x = Mini.top();
		cout << x << " ";
		Mini.pop();
	}
}



















