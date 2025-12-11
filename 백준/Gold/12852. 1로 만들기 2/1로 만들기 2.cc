#include <iostream>
#include <vector>

using namespace std;

int dp[1000001];
int parent[1000001];

int main()
{
    int n;
    cin >> n;
    
    dp[1]=0;
    for(int i=2;i<=n;i++)
    {
        dp[i]      = dp[i-1]+1;
        parent[i]  = i-1;
        if(i%2==0)
        {
            if(dp[i] > dp[i/2]+1)
            {
                dp[i]      = dp[i/2]+1;
                parent[i]  = i/2;
            }
        }
        if(i%3==0)
        {
            if(dp[i] > dp[i/3]+1)
            {
                dp[i]      = dp[i/3]+1;
                parent[i]  = i/3;
            }
        }
    }
    
    cout << dp[n] << endl;
    
    while(n > 0)
    {
        cout << n << " ";
        if(n==1) break;
        n = parent[n];
    }

    return 0;
}