class Solution {
    int Stair(vector<int>&cost, int i, int n, int* dp) {

        if (i >= n) {
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i];
        }

        int op1 = op2 = INT_MAX;

        op1 = Stair(cost, i + 1, n, dp) + cost[i];
        op2 = Stair(cost, i + 2, n, dp) + cost[i];

        return dp[i] = min(op1, op2);

    }
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int *dp = new int[cost.size() + 1];
        for (int i = 0; i < cost.size() + 1; i++) {
            dp[i] = -1;
        }

        int option1 = Stair(cost, 0, n, dp);

        for (int i = 0; i < cost.size() + 1; i++) {
            dp[i] = -1;
        }

        int option2 = Stair(cost, 1, n, dp);

        return min(option1, option2);
    }

};

//H.W: Iterative WAY