#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> s(n);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    
    vector<int> dp(n);
    for(int i=0;i<n;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(s[j]<s[i])
            {
                dp[i]= max(dp[j]+1, dp[i]);
            }
        }
    }
    
    cout << *max_element(dp.begin(),dp.end());
    
    
    return 0;
}