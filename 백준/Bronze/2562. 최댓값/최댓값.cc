#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0,d=0;
    int n = 9;
    while(n--)
    {
        cin >> a;
        b++;
        if(a>c)
        {
            c = a;
            d = b;
        }
    }
    cout << c << '\n' << d;
    
    return 0;
}