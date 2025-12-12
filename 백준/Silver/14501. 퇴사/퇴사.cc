#include <iostream>
#include <algorithm>

using namespace std;

int t[16];
int p[16];
int dp[17];

int main()
{
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++)
    {
        cin >> t[i] >> p[i];
    }
    
    for(int i=n;i>0;i--)
    {
        dp[i] = dp[i+1];
        if(i+t[i]-1<=n)
        {
            dp[i] = max(dp[i+t[i]] + p[i], dp[i]);
        }
    }
    
    cout << dp[1];
    
    return 0;
}