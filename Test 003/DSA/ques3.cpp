#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t;
    cin >> n >> m >> t;

    const int INF = 1e9;
    vector<vector<int>> dist(n, vector<int>(n, INF));

    for (int i = 0; i < n; i++)
        dist[i][i] = 0;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
        dist[v][u] = w;
    }

    // Floyd-Warshall
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                dist[i][j] = min(dist[i][j],
                                 dist[i][k] + dist[k][j]);
            }
        }
    }

    int ans = -1;
    int minCount = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (i != j && dist[i][j] <= t)
                count++;
        }
        if (count <= minCount)
        {
            minCount = count;
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}