#include<bits/stdc++.h>
using namespace std;
int n;
int val[n];
int wt[n];



int Knapsack(int i, int capacity) {

	if (capacity == 0 or i == n) {
		return 0;
	}

	if (wt[i] > capacity) {
		return Knapsack(i + 1, capacity);
	}

	//When you have selected an item i.
	int option1 = val[i] + Knapsack(i + 1, capacity - wt[i]);

	//When you have not selected an item.
	int option2 = 0 + Knapsack(i + 1, capacity);

	return max(option1, option2);
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> val[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> wt[i] << endl;
	}
	int capacity;
	cin >> capacity;

	cout << Knapsack(0, capacity) << endl;
}






// bag: max 50kg:


// 1 2 3


// item1: 2 option (loge)
// nahi loge:



// bag: uske ander item1 aagaya: val: item1 value aachiku hain.

// 50; 50-item1 ka weight


//Unbounded knapsack:
//knapsack :
//Pair of Numbers:
//Include and Exclude Type of Problems

//CHaracter array/string ke upar recursion.