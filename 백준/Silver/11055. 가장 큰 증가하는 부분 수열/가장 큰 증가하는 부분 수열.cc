#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> s(n,0);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    
    vector<int> dp(n,0);
    dp[0] = s[0];
    
    for(int i=1;i<n;i++)
    {
        dp[i]=s[i];
        for(int j=0;j<i;j++)
        {
            if(s[j]<s[i])
            {
                dp[i] = max(dp[j]+s[i], dp[i]);
            }
        }
    }
    
    cout << *max_element(dp.begin(),dp.end());
    
    return 0;
}