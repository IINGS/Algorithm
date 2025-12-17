#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    set<int> vip;
    for(int i=0;i<m;i++)
    {
        int c;
        cin >> c;
        vip.insert(c);
    }
    
    vector<long long> dp(n+1);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-2]*2 + dp[i-3];
    }
    
    if(vip.empty())
    {
        cout << dp[n];
        return 0;
    }
    
    int ans = 1;
    int lastidx = 0;
    while(!vip.empty())
    {
        int front = *vip.begin();
        int length = front - lastidx - 1;
        ans *= dp[length];
        lastidx = front;
        vip.erase(vip.begin());
        if(vip.empty())
        {
            int last_length = n - lastidx;
            ans *= dp[last_length];
        }
    }
    
    cout << ans;
    
    return 0;
}