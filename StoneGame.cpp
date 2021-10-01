#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int solver(int start, int end, int state, vector<int> &nums, vector<vector<vector<int>>> &dp)
    {
        if (start > end)
            return 0;
        if (dp[state][start][end] != -1)
            return dp[state][start][end];
        int op1 = nums[start] + solver(start + 1, end, !state, nums, dp);
        int op2 = nums[end] + solver(start, end - 1, !state, nums, dp);
        if (state)
            return dp[state][start][end] = max(op1, op2);
        return dp[state][start][end] = min(op1, op2);
    }

    bool stoneGame(vector<int> &piles)
    {
        vector<vector<vector<int>>> dp(2, vector<vector<int>>(piles.size(), vector<int>(piles.size(), -1)));
        return solver(0, piles.size() - 1, 1, piles, dp);
    }
};

int main()
{
    vector<int> piles = {5, 3, 4, 5};
    Solution s1;
    cout << s1.stoneGame(piles);
    return 0;
}