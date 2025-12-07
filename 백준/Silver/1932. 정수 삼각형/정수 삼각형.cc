#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<vector<int>> s(n,vector<int>(n+2,0));
    for(int i=0;i<n;i++)
    {
        s[i][0] = 0;
        for(int j=0;j<=i;j++)
        {
            int a;
            cin >> a;
            s[i][j+1] = a;
        }
    }
    
    vector<vector<int>> dp(n,vector<int>(n+2,0));
    dp[0][1]=s[0][1];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            dp[i][j+1] = s[i][j+1] + max(dp[i-1][j+1], dp[i-1][j]);
        }
    }
    
    int biggest=0;
    for(int i=0;i<n;i++)
    {
        if(biggest<dp[n-1][i+1])
        {
            biggest = dp[n-1][i+1];
        }
    }
    
    cout << biggest;
    
    
    return 0;
}