#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> s;
    s.push_back(0);
    
    for(int i=1;i<=n;i++)
    {
        int a;
        cin >> a;
        int x = a + s[i-1];
        s.push_back(x);
    }
    
    for(int i=0;i<m;i++)
    {
        int p, q;
        cin >> p >> q;
        cout << s[q] - s[p-1] << '\n';
    }
    
    return 0;
}