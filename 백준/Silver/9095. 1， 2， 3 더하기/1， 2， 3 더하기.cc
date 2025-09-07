#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> list(t);
    int maxint=0;
    for (int i=0; i<t; i++)
    {
        cin >> list[i];
        maxint = max(maxint, list[i]);
    }
    vector<int> dp(maxint+1);
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for (int i=4; i<=maxint; i++)
    {
        dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
    }
    
    for(int i=0; i<t; i++)
    {
        cout << dp[list[i]] << endl;
    }
    
    return 0;
}