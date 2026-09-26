#include <iostream>
#include <vector>
using namespace std;

bool isBipartite(vector<vector<int>> &graph)
{
    // Write your solution here
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n))
        return 0;
    vector<vector<int>> graph(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        if (cin >> k)
        {
            graph[i].resize(k);
            for (int j = 0; j < k; j++)
            {
                cin >> graph[i][j];
            }
        }
    }
    if (isBipartite(graph))
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }
    return 0;
}