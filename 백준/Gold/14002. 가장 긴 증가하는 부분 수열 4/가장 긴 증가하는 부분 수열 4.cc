#include <iostream>
#include <algorithm>

int a[1001];
int dp[1001];
int parent[1001];
int n;

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        dp[i]=1;
        parent[i]=i;
        for(int j=1;j<i;j++)
        {
            if(a[j]<a[i])
            {
                if(dp[j]+1 > dp[i])
                {
                    dp[i]     =dp[j]+1;
                    parent[i] =j;
                }
            }
        }
    }
    
    int it = max_element(dp,dp+n+1) - dp;
    int max = *max_element(dp,dp+n+1);
    vector<int> arr;
    
    cout << max << '\n';
    
    while(it)
    {
        arr.push_back(a[it]);
        if(it==parent[it]) break;
        it=parent[it];
    }
    
    for(int i=max-1;i>=0;i--)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}