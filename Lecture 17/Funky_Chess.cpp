#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

//Snippet bana lo input:


int n;
int grid[10][10], Total_Ones, ans = -1, N = 10;

int dx[] = {1, -1, 1, -1, 2, 2, -2, -2};
int dy[] = {2, 2, -2, -2, -1, 1, -1, 1};

void input_grid() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				Total_Ones++;
			}
		}
	}
}

//count represents the number of boxes knight is able
//to travel in a single path.
void knight(int x, int y, int count) {

	ans = max(ans, count);

	//x,y par kade o:

	//x,y se ideally 8 different boxes par jaasakta hu:

	for (int i = 0; i < 8; i++) {

		int x_coordinate = x + dx[i];
		int y_coordinate = y + dy[i];

		if (x_coordinate >= 0 and x_coordinate<N and
		        y_coordinate >= 0 and y_coordinate < N and
		        grid[x_coordinate][y_coordinate] == 1) {


			grid[x_coordinate][y_coordinate] = 0;
			knight(x_coordinate, y_coordinate, count + 1);
			//Vapas aayega:

			grid[x_coordinate][y_coordinate] = 1;//Backtracking
		}
	}

}

int main() {
	cin >> n;
	input_grid();

	grid[0][0] = 0;//BEcause ye starting point:

	knight(0, 0, 1);

	cout << Total_Ones - ans << endl;
	//answer represent: the maximum of boxes a knight
	//can travel in a single path.
}

