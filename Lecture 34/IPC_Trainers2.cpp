#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
#define int long long


int IPC_Trainers() {

	int total_trainers, days;
	cin >> total_trainers >> days;

	int starting_date[N] = {0}, lectures[N] = {0}, sadness[N] = {0};

	priority_queue<pair<int, int>>pq;

	for (int i = 0; i < total_trainers; i++) {
		cin >> starting_date[i] >> lectures[i] >> sadness[i];

		pq.push({sadness[i], i});
	}

	set<int>s;

	for (int i = 1; i <= days; i++) {
		s.insert(i);
	}


	int Lectures_Taken[N] = {0};

	while (!pq.empty()) {

		auto x = pq.top();
		pq.pop();

		int Konsa_teacher_hain = x.second;
		int Iski_sadness_kitni_hain = x.first;

		int start = starting_date[Konsa_teacher_hain];
		int ending_day = start + lectures[Konsa_teacher_hain] - 1;

		// {1, 2, 3, 4, 8, 9,};

		//lecture he has to : 5: 4 5 6 7 8
		// 4 8 9 (no days are available)

		//start=4;
		//end=8;

		//4: lower bound kya hain: 4(complete) lecture_taken=1:

		//5: lower_bound(5):  5(complete)  lecture_taken=2
		// 6: lower_bound(6): 9: 6(complete)  lecture_taken=3;
		// break;
		//7: lower_bound()===s.end();

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


