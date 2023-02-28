#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long


bool KyaExamPassHueSaare(int n, int m, const vector<int>ExamDayMap[], int *pre, int total_days) {
	vector<pair<int, int>>x;//Prefer Map:

	//x.first: last din jab aap exam ko desakte ho in the range of 1-mid/toatal_day.

	for (int i = 1; i <= m; i++) {//Iterating over the examdaymap

		auto it = upper_bound(ExamDayMap[i].begin(), ExamDayMap[i].end(), total_days);
		//ek kadam ka milega

		if (it == ExamDayMap[i].begin()) {
			//aap is subject ko is range 1-total days.
			return false;//This total days cannot be a answer.
		}
		x.push_back(make_pair(*(--it), i));
	}


	// for (auto y : x) {
	// 	cout << y.first << " " << y.second << endl;
	// }

	//I Know konsa exam aap konse last din desakte ho in the range of 1 se total days.

	sort(x.begin(), x.end());

	int buffer_days = 0, earlier_exam_day = 0, prep_days = 0, available_days = 0;

	//4-2
	//5-1
	//iterate over this x vector jisme first me pada hain the last day
	//in the range of 1-total days jab aap exam desakte ho
	//second par pada hain konse suject ki baat kar rahe ho

	for (auto y : x) {

		int Last_day_to_give_exam = y.first;
		int subject = y.second;

		prep_days = pre[subject] + 1;

		available_days = Last_day_to_give_exam - earlier_exam_day + buffer_days;
		if (prep_days > available_days) {
			return false;
		}

		buffer_days = available_days - prep_days;

		earlier_exam_day = Last_day_to_give_exam;
	}

	return true;

}
int Exams(int n, int m, const vector<int>ExamDayMap[], int *prep) {

	int s = 1;
	int e = n;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (KyaExamPassHueSaare(n, m, ExamDayMap, prep, mid) == 1) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}

int32_t main() {
	int n, m;

	cin >> n >> m;

	int *prep = new int[m + 1];

	int *d = new int[n + 1];

	vector<int>ExamDayMap[100002];

	for (int i = 1; i <= n; i++) {
		cin >> d[i];
		if (d[i] == 0) {
			continue;
		}
		ExamDayMap[d[i]].push_back(i);
	}


	for (int i = 1; i <= m; i++) {
		cin >> prep[i];
	}

	cout << Exams(n, m, ExamDayMap, prep) << endl;
	//KyaExamPassHueSaare(n, m, ExamDayMap, prep, 6);

}

