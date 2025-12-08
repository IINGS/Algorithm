#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<vector<long long>> dp(n,vector<long long>(2,0));
    // dp[k+1자리][0으로끝나는지1로끝나는지] 를 만족하는 이친수의 개수
    dp[0][0]=0;
    dp[0][1]=1;
    
    for(int i=1;i<n;i++)
    {
        dp[i][0] = dp[i-1][0]+dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }
    
    cout << dp[n-1][0] + dp[n-1][1];
    
    return 0;
}