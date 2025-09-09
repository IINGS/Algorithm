#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<vector<int>> dp(n,vector<int>(3));
    cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
    
    for(int i=1;i<n;i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        dp[i][0] = a + min(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = b + min(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = c + min(dp[i-1][1],dp[i-1][0]);
    }
    
    int s = min(dp[n-1][0],dp[n-1][1]);
    int ss = min(s,dp[n-1][2]);
    
    cout << ss;
    
    return 0;
}