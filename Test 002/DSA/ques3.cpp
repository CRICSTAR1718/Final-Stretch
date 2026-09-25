#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 1; // 0
    int ways = 9;
    for (int len = 1; len <= n; len++)
    {
        if (len > 1)
            // 10 - (len - 1)====> 10-len+1=====> 11-len
            ways *= (11 - len);
        ans += ways;
    }
    cout << ans;
    return 0;
}