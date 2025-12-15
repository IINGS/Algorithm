#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

int n;
int cache[10001];

using namespace std;

int solve(int idx, const vector<int> &v)
{
    if(idx<=0) return 0;
    if(idx==1) return v[1];
    if(idx==2) return v[1]+v[2];
    if(cache[idx]!=-1) return cache[idx];
    
    int res = max({solve(idx-1,v),                        // 이번꺼 안 마심
                  solve(idx-2,v) + v[idx],                // 저번꺼 안 마심
                  solve(idx-3,v) + v[idx-1] + v[idx]});   // 이번꺼, 저번꺼 마심
    
    return cache[idx] = res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    memset(cache,-1,sizeof(cache));
    
    cin >> n;
    vector<int> wine(10001);
    for(int i=1;i<=n;i++)
    {
        cin >> wine[i];
    }
    
    cout << solve(n,wine);
    
    return 0;
}