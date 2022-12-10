#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n, time_provided;
	cin >> n >> time_provided;


	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int total_time_consumed = 0;
	int book_read = 0;

	int j = 0;
	for (int i = 0; i < n; i++) {

		total_time_consumed += a[i];
		book_read++;

		if (total_time_consumed > time_provided) {
			//Piche se ek element ko nikal feko

			total_time_consumed = total_time_consumed - a[j];
			j++;
			book_read--;
		}

		//this will give you the max only:
	}
	cout << book_read << endl;
}


