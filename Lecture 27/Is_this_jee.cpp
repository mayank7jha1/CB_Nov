#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define PI 3.141592653

double Derivative(double x, double b, double c) {

	return (sin(x) * ((2 * x) + b) - (x * x + b * x + c) * cos(x));
}


double IsthisJee(double b, double c) {
	//You are trying out different x which is the x-cordinate for
	//min value of the function.

	double s = 0;
	double e = PI / 2;
	double ans;
	int count = 0;
	while (s <= e) {

		double mid = (s + e) / 2;
		double value = Derivative(mid, b, c);

		if (value < 0) {
			s = mid;
			ans = mid;
		} else {
			e = mid;
			ans = mid;
		}
		count++;
		if (count == 100) {
			break;
		}
	}
	return (((ans * ans) + (b * ans) + c) / sin(ans));
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		double b, c;
		cin >> b >> c;

		double ans = IsthisJee(b, c);

		cout << setprecision(15) << ans << endl;
	}
}



//Infinite loop : min value:
//decimal: mid=3.333

// 3.3334
// 3.33341


