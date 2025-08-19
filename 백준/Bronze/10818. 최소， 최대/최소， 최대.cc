#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int small = 1000000;
    int big = -1000000;
    while(n--)
    {
        int a;
        cin >> a;
        small = (a < small ? a : small);
        big = (a > big ? a : big);
    }
    cout << small << " " << big;
    
    return 0;
}