#include<bits/stdc++.h>
using namespace std;
const int N = 0;

template<typename T>
class Graph {
	map<T, list<T>>mp;
public:
	void addEdge(T x, T y, int direction) {
		mp[x].push_back(y);

		if (direction == 0) {
			mp[y].push_back(x);
		}
	}

	//O(n) and O(n)
	void BFS(T scr, T target) {

		map<T, int>distance;

		for (auto x : mp) {
			distance[x.first] = INT_MAX;
		}

		queue<T>q;
		q.push(scr);
		distance[scr] = 0;

		while (!q.empty()) {
			T vertex = q.front();
			//cout << vertex << " ";
			q.pop();

			for (auto neighbour : mp[vertex]) {

				if (distance[neighbour] == INT_MAX) {

					q.push(neighbour);

					distance[neighbour] = distance[vertex] + 1;
				}
			}
		}

		// for (auto x : mp) {
		// 	cout << "Distance of " << x.first << " from " << scr << " ----> "  << distance[x.first] << endl;
		// 	//cout << distance[x.first] << " ";
		// }

		cout << "Distance of " << target << " from " << scr << " is " << distance[target] << endl;
	}

};

int main() {
	Graph<int>g;

	int n, m, direction;
	cin >> n >> m >> direction;


	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		g.addEdge(x, y, direction);
	}

	int scr, target;
	cin >> scr >> target;

	g.BFS(scr, target);

}

// key
// 0   0
// 1   1
// 2   1
// 3   1
// 4   2
// 5   3