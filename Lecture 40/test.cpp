//Scissor Being the Only Survivor
double solveScissors(int r, int p, int s) {

	if (r == 0) {
		return 1.0;
	}

	if (p == 0 or s == 0) {
		return 0.0;
	}

	double ans = 0;
	double total = (r * p) + (p * s) + (s * r);

	//Fight r vs p

	ans = ans + (r * p) / total + solveScissors(r - 1, p, s);

	//Fight r vs s

	ans = ans + (r * s) / total + solveScissors(r, p, s - 1);

	//Fight p vs s

	ans = ans + (p * s) / total + solveScissors(r, p - 1, s);

	return ans;
}

double solvePapers(int r, int p, int s) {

	if (s == 0) {
		return 1.0;
	}

	if (r == 0 or p == 0) {
		return 0.0;
	}

	double ans = 0;
	double total = (r * p) + (p * s) + (s * r);

	//Fight r vs p

	ans = ans + (r * p) / total + solvePapers(r - 1, p, s);

	//Fight r vs s

	ans = ans + (r * s) / total + solvePapers(r, p, s - 1);

	//Fight p vs s

	ans = ans + (p * s) / total + solvePapers(r, p - 1, s);

	return ans;
}


// cout << fixed << setprecision(9) << solveScissors(r, p, s) << endl;
// cout << fixed << setprecision(9) << solvePapers(r, p, s) << endl;