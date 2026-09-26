#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumDetonation(vector<vector<int>> &bombs)
    {
        // Write your logic here to find the maximum bombs detonated
        return 0;
    }
};

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n)
    {
        vector<vector<int>> bombs(n, vector<int>(3));
        for (int i = 0; i < n; ++i)
        {
            cin >> bombs[i][0] >> bombs[i][1] >> bombs[i][2];
        }

        Solution sol;
        cout << sol.maximumDetonation(bombs) << "\n";
    }
    return 0;
}