#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
#define val 1000000100000
string a;
int nb, ns, nc, pb, ps, pc, r;

int Hamburgers() {
	//Defining the Search Space
	int s = 0;
	int e = val;
	int ans = -1;//This is the max. number of hamburger you can make;
	//It is initialised with a value that can never a answer.

	int sb = 0, ss = 0, sc = 0;//Count of bread,sausage and cheese in the recipe.

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'B') {
			sb++;
		} else if (a[i] == 'S') {
			ss++;
		} else {
			sc++;
		}
	}

	while (s <= e) {
		int mid = (s + e) / 2;
		int total_price_required_for_bread = (((mid * sb) - nb) * pb) < 0 ? 0 : (((mid * sb) - nb) * pb);
		int total_price_required_for_sausage = (((mid * ss) - ns) * ps) < 0 ? 0 : (((mid * ss) - ns) * ps);
		int total_price_required_for_cheese = (((mid * sc) - nc) * pc) < 0 ? 0 : (((mid * sc) - nc) * pc);

		int total_price = total_price_required_for_bread + total_price_required_for_sausage +
		                  total_price_required_for_cheese;

		if (total_price <= r) {
			s = mid + 1;
			ans = mid;//This can be your answer;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}




int32_t main() {
	cin >> a;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	cout << Hamburgers() << endl;
}