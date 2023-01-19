#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool visited[1001][1001], solution[1001][1001];


bool RatInMaze(char maze[1001][1001], int i, int j, int n, int m) {

	if (i == n and j == m) {
		//AAp abhi aakhi box par khade hain.
		solution[i][j] = 1;
		//aapne aakhri box ko 1 kiya and ab aap solution array ko print kardo;
		for (int x = 0; x <= n; x++) {
			for (int y = 0; y <= m; y++) {
				cout << solution[x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
		//Maine solution array ko print kardiya hain
		//iska matlab hain mujhe ek right most path mil gaya
		//and hence stop hona hain.

		return true;//THis represent ki answer mil gaya and
		//aapne solution array ko ek bar print kardiya hain.


		//Agar aapne true ki banaji isko false kardiya
		//toh recursion ko lagta ki even though maine ek
		//solution print kardiya par recursion ko aisa lagta ki
		//maine ek bhi solution print nahi kiya and hence
		//recursion dursa solution find karne ka try karta.
		//and hence saare posible solution end tak pahuchne ke
		//print hojaate.
	}





	if (visited[i][j] == 1) {
		return false;
	}

	//i,j:
	visited[i][j] = 1;
	solution[i][j] = 1;

	//Pehle main right jaaunga from i,j:

	if (j + 1 <= m and visited[i][j + 1] == 0) {
		bool rightans = RatInMaze(maze, i, j + 1, n, m);
		if (rightans == 1) {
			//Recursion ko bilkul end tak ek path mil gaya
			//and hence usne true return kar diya.
			//Stop hojaana hain, kyuki agar recursion ko
			//path mil gaya  to mujhe solution array bhi mil gaya
			//yahi stop hojaana hain.
			return true;
		}
	}

	//Ab main i,j se niche jaaunga:

	if (i + 1 <= n and visited[i + 1][j] == 0) {
		bool downans = RatInMaze(maze, i + 1, j, n, m);
		//Check karega kya main bilkul end tak jaa paaya
		//from i+1,j agar yes hain to stop hojaao
		//agar stop hogaye iska matlab solution aaray jab main
		//recursion ke sath end tak gaya to solution array ko fill kara
		//isliye mujhe answer bhi mil gaya.
		if (downans == 1) {
			return true;
		}
	}
	//Aap ab line number 49 par ho and bhi i,j hi hain index
	//aapne realise kiya ki aap i+1,j se bhi end tak nahi pahuch
	//rahe and aap i,j+1 se bhi end tak nahi pahuch rahe
	//iska matlab hain aap i,j se right me jaao y down jaao
	//aapko solution nahi milega so
	//aapne jo uspar i,j par solution ko 1 mark kiya hain
	//vo galat hai and hence aapko usko 0 karna hain.
	solution[i][j] = 0;

	return false;//Aapko is box se answer nahi mila.
}



int main() {
	int n, m;
	cin >> n >> m;

	char maze[1001][1001];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'X') {
				visited[i][j] = 1;//Is par nahi jaan hain.
			}
		}
	}

	n--, m--;

	int ans = RatInMaze(maze, 0, 0, n, m);

	if (ans == 0) {
		cout << "-1" << endl;
	}

	//cout << "mayabnk" << endl;
}