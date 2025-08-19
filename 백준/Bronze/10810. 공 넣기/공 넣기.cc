#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1,0);
    
    while(m--)
    {
        int i,j,k;
        cin >> i >> j >> k;
        fill(a.begin()+i, a.begin()+j+1, k);
    }
    
    for(int i=1; i<=n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}