#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int big = 0, sum = 0;
    
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if(x>big)
        {
            big = x;
        }
    }
    
    cout << 1.f*sum*100/n/big;
    
    return 0;
}