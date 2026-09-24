#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int n;
    cin>>n;
    vector<vector<int>>mat(n, vector<int>(n));
    for(int i=0; i<n; i++)
    {
        mat[i][0]=1;
        mat[i][i]=1;
        for(int j=1; j<i; j++)
        {
            mat[i][j]=mat[i-1][j]+mat[i-1][j-1];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}