#include <iostream>
#include <vector>
using namespace std;

bool stoneGame(vector<int> &piles)
{
    // Write your solution here
    return false;
}

int main()
{
    int n;
    if (cin >> n)
    {
        vector<int> piles(n);
        for (int i = 0; i < n; i++)
            cin >> piles[i];
        cout << (stoneGame(piles) ? "true" : "false") << endl;
    }
    return 0;
}