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
	void BFS(T scr) {
		map<T, bool>visited;

		for (auto x : mp) {
			visited[x.first] = 0;
		}

		queue<T>q;
		q.push(scr);
		visited[scr] = 1;

		while (!q.empty()) {
			T vertex = q.front();
			cout << vertex << " ";
			q.pop();

			for (auto neighbour : mp[vertex]) {
				if (visited[neighbour] == 0) {
					q.push(neighbour);
					visited[neighbour] = 1;
				}
			}
		}
	}

	//O(n) and O(n)
	void DFS_Helper(T scr, map<T, bool>&visited) {
		cout << scr << " ";
		visited[scr] = 1;

		for (auto neighbour : mp[scr]) {

			if (!visited[neighbour]) {
				DFS_Helper(neighbour, visited);
			}

		}
	}

	void DFS(T scr) {
		map<T, bool>visited;

		for (auto x : visited) {
			visited[x.first] = 0;
		}

		DFS_Helper(scr, visited);
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

	g.BFS(0);
	cout << endl;
	g.DFS(0);

}


// visited

// key(node)       value(visited hain ki nahi?)
// 0                1
// 1                0
// 2                0
// 3                0
// 4                0
// 5                0