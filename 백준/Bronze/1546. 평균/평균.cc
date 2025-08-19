#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float big = 0, sum = 0;
    
    for(int i=0; i<n; i++)
    {
        float x;
        cin >> x;
        sum += x;
        if(x>big)
        {
            big = x;
        }
    }
    
    cout << sum*100/n/big;
    
    return 0;
}