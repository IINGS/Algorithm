#include <iostream>
#include <algorithm>

int t,w;

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> t >> w;
    int tree[t+1] = {0};
    for(int i=1;i<=t;i++)
    {
        cin >> tree[i];
    }
    int dp[t+1][w+1] = {0};
    dp[1][0]= tree[1]==1 ? 1:0;
    dp[1][1]= tree[1]==2 ? 1:0;
    
    for(int i=2;i<=t;i++)
    {
        for(int j=0;j<=w&&j<=i;j++)//j는 움직인 횟수
        {
            if(tree[i]==1)
            {
                if(j==0)
                {
                    dp[i][j]= dp[i-1][j] + 1;
                }
                else if(j%2==0)//먹
                {
                    dp[i][j]= max(dp[i-1][j],dp[i-1][j-1]) + 1;
                }
                else//못먹
                {
                    dp[i][j]= max(dp[i-1][j],dp[i-1][j-1]);
                }
            }
            else
            {
                if(j==0)
                {
                    dp[i][j]= dp[i-1][j];
                }
                else if(j%2==0)//못먹
                {
                    dp[i][j]= max(dp[i-1][j],dp[i-1][j-1]);
                }
                else//먹
                {
                    dp[i][j]= max(dp[i-1][j],dp[i-1][j-1]) + 1;
                }
            }
        }
    }
    
    cout << *max_element(dp[t],dp[t]+w+1);
    

    return 0;
}