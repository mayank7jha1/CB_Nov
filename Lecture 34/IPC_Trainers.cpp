#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
#define int long long


int IPC_Trainers() {

	int total_trainers, days;

	int starting_date[N] = {0}, lectures[N] = {0}, sadness[N] = {0};

	priority_queue<pair<int, int>>pq;
	//Pq--->sadness and konse teacher ki baat kar rahe ho.

	for (int i = 0; i < total_trainers; i++) {
		cin >> starting_date[i] >> lectures[i] >> sadness[i];

		pq.push({sadness[i], i});
	}

	//Mujhe konse teacher ki baat kar rahe ho and uski sadness kitni hain


	//Konsa day available hain ye main kaise pata karu?

	set<int>s;//It contains your available days.

	for (int i = 1; i <= days; i++) {
		s.insert(i);
	}


	int Lectures_Taken[N] = {0};//Ki konse teacher kitne lecture lepaaya

	while (!pq.empty()) {

		auto x = pq.top();
		pq.pop();

		int Konsa_teacher_hain = x.second;
		int Iski_sadness_kitni_hain = x.first;

		int start = starting_date[Konsa_teacher_hain];//Ye teacher is din aaya

		int ending_day = start + lectures[Konsa_teacher_hain] - 1;

		//aap iterate karo and har din ka lower bound nikalo kyuki
		//aapko ye pata karna hain ki konsa first day available hain
		//for the current day.

		for (int i = start; i <= ending_day; i++) {
			auto p = s.lower_bound(i);

			if (p == s.end()) {
				break;
			} else {
				Lectures_Taken[Konsa_teacher_hain]++;
				s.erase(p);
			}
		}

	}


	int Total_sadness = 0;
	for (int i = 0; i < total_trainers; i++) {
		Total_sadness += (lectures[i] - Lectures_Taken[i]) * sadness[i];
	}

	return Total_sadness;

}

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cout << IPC_Trainers() << endl;
	}
}