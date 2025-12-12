#include <iostream>
#include <algorithm>

int n;
int t[1500001];
int p[1500001];
int dp[1500002];

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    for(int i=1;i<=n;i++)
    {
        cin >> t[i] >> p[i];
    }
    
    for(int i=n;i>0;i--)
    {
        int DateWhenDone = i + t[i] - 1;
        dp[i]=dp[i+1];
        if(DateWhenDone <= n)
        {
            dp[i] = max(dp[i], dp[DateWhenDone+1]+p[i]);
        }
    }
    
    cout << dp[1];
    
    return 0;
}