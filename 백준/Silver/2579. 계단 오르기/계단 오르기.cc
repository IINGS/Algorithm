#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> score(n+1);
    score[0]=0;
    for (int i=1; i<=n; i++)
    {
        cin >> score[i];
    }
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=dp[0]+score[1];
    dp[2]=dp[1]+score[2];
    for(int i=3; i<=n;i++)
    {
        dp[i] = score[i] + max(dp[i-2], score[i-1] + dp[i-3]);
    }
    cout << dp[n];
    
    return 0;
}