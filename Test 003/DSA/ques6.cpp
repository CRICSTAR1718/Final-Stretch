#include <bits/stdc++.h>
using namespace std;

int networkDelayTime(vector<vector<int>> &times, int n, int k)
{
    // Write your solution here
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m))
        return 0;
    vector<vector<int>> times(m, vector<int>(3));
    for (int i = 0; i < m; i++)
    {
        cin >> times[i][0] >> times[i][1] >> times[i][2];
    }
    int k;
    if (!(cin >> k))
        return 0;
    cout << networkDelayTime(times, n, k) << "\n";
    return 0;
}