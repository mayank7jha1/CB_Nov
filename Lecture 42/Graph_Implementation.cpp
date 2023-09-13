#include<bits/stdc++.h>
using namespace std;
const int N = 0;

//Adjacency List:

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

	void Print() {

		// //pair<int,list<int>>
		for (pair<T, list<T>> x : mp) {
			T vertex = x.first;
			cout << vertex << " --> ";

			for (T y : x.second) {
				cout << y << " ";
			}

			cout << endl;
		}


		// for (map<T, list<T>>::iterator it = mp.begin(); it != mp.end(); it++) {
		// 	cout << (*it).first << " ---> ";

		// 	list<T>ls = (*it).second;

		// 	for (list<T>::iterator it1 = ls.begin(); it1 != ls.end(); it1++) {
		// 		cout << (*it1) << " ";
		// 	}

		// 	cout << endl;
		// }

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

	g.Print();
}


// key      value(list)
// 0         1 2 3
// 1         0 2
// 2         0 3 1
// 3         0 2 4
// 4         3 5
// 5         4