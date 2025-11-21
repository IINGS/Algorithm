#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    vector<vector<int>> s(41,vector<int>(2));
    s[0] = {1,0};
    s[1] = {0,1};
    
    for(int i=2;i<=40;i++)
    {
        s[i][0] = s[i-1][0] + s[i-2][0];
        s[i][1] = s[i-1][1] + s[i-2][1];
    }
    
    for (int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        cout << s[n][0] << " " << s[n][1] << '\n';
    }
    
    return 0;
}