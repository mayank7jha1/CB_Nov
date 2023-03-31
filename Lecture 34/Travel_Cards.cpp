#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long

int Travel_Cards() {
	int n, a, b, k, f;
	cin >> n >> a >> b >> k >> f;


	//Data Structure Har trip ka cost store karke rakhe

	map<pair<string, string>, int>mp;

	//First: Trip ki info: (Pair: kaha se kaha tak)
	//second : COst of trip

	string prev_dest = "";

	for (int i = 0; i < n; i++) {

		string start_dest, ending_dest;
		cin >> start_dest >> ending_dest;
		int price;

		if (prev_dest == start_dest) {
			//This is a Transhipment
			price = b;
		} else {
			price = a;
		}

		prev_dest = ending_dest;

		if (start_dest > ending_dest) {
			swap(start_dest, ending_dest);
		}

		if (mp.find({start_dest, ending_dest}) != mp.end()) {

			//Ye ek repeated path hain
			mp[ {start_dest, ending_dest}] += price;
		} else {

			//you are travelling on this path for the first time.
			mp[ {start_dest, ending_dest}] = price;
		}
	}

	vector<int>ans;
	int total_cost = 0;

	// first=pair<int,int>
	//second int:

	// pair<pair<string, string>, int>

	for (auto x : mp) {
		pair<string, string> trip = x.first;
		int cost = x.second;

		ans.push_back(cost);
		total_cost += cost;
	}

	//Har trip ka cost and total cost abtak ki saari trip ka

	sort(ans.begin(), ans.end(), greater<int>());

	//Kya main travel cards lesakta hu aur kitne aur usse trip ka cost
	//kitna kam hoga.

	for (int i = 0; i < k; i++) {
		if (ans[i] >= f) {
			total_cost = total_cost - ans[i] + f;
		} else {
			//aapka sabse jada travel karne vaali trip ka
			// cost ab f se kam hain.
			break;
			//because agar sabse jada vaali trip ka cost ki
			//kam hai to isse baad kisi bhi trip me aap
			//travel card nahi lepaaoge.
		}
	}

	cout << total_cost << endl;

}



//a-b->10;

//b-a->5:    map<a,b,cost>
// map<b,a,cost>

int32_t main() {
	Travel_Cards();
}