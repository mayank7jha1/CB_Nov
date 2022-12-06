#include<iostream>
#include<algorithm>
//Library Sort and Reverse likha hua hain

using namespace std;
// const int N = 0;

void bubbleSort(int a[], int n) {
//Fast::
	for (int i = 0; i < n - 1; i++) {
		int flag = 0;
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				flag = 1;
				swap(a[j], a[j + 1]);
			}
		}

		if (flag == 0) {
			break;
		}
	}
}

void SelectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		//Sabse chote element ko dhundna hain:
		int minimum = i;
		//I th element is fixed on;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[minimum]) {
				minimum = j;
			}
		}

		//Sabse chota element is in a[minimum];
		swap(a[minimum], a[i]);
	}
}


void InsertionSort(int a[], int n) {
	int temp;
	for (int i = 1; i < n; i++) {
		temp = a[i];
		int j = i - 1;

		while (j >= 0 and a[j] > temp) {
			//Shifting kardo ek kadam aage:
			a[j + 1] = a[j];
			j = j - 1;//and the process continues:
		}

		//That means we have found the correct locked position for the
		//element of the unsorted half:
		a[j + 1] = temp;
	}
}

void reverse(int a[], int n) {
	for (int i = 0, j = n - 1; i < j; i = i + 1, j = j - 1) {
		swap(a[i], a[j]);
	}
}
//Template:: general typename:: General:

void print(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// bubbleSort(a, n);
	// reverse(a, n);
	// print(a, n);
	//sort(a, a + n);
	// sort karo but second index se karo:

	sort(a, a + n);
	//First argument:: kaha se suru karna hain uska address
	//Second argument:: Kaha tak karna hain usse ek khatam aage;

	reverse(a, a + n);
	//STL:: Algorithm
	print(a, n);

}


// sort:: bubbleSort when n is very smaLL
// when n is large merge / quick sort.
