#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long solve(int i, int target,
                    vector<int> &arr,
                    vector<vector<long long>> &dp)
    {
        // Base case
        if (i == arr.size())
            return target == 0;
        if (dp[i][target] != -1)
            return dp[i][target];
        // Don't take
        long long notTake = solve(i + 1, target, arr, dp);
        // Take
        long long take = 0;
        if (arr[i] <= target)
            take = solve(i + 1, target - arr[i], arr, dp);
        return dp[i][target] = take + notTake;
    }

    long long countPartitions(vector<int> &arr, int diff)
    {
        int n = arr.size();
        int total = 0;
        for (int x : arr)
            total += x;
        // target = (total + diff) / 2
        if (total + diff < 0)
            return 0;
        if ((total + diff) % 2 != 0)
            return 0;
        int target = (total + diff) / 2;
        vector<vector<long long>> dp(
            n,
            vector<long long>(target + 1, -1));
        return solve(0, target, arr, dp);
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int diff;
    cin >> diff;
    Solution obj;
    cout << obj.countPartitions(arr, diff) << "\n";
    return 0;
}