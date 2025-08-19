#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    int answer;
    if(a*b>0)
    {
        answer = a>0 ? 1 : 3;
    }
    else
    {
        answer = a>0 ? 4 : 2;
    }
    cout << answer;
    
    return 0;
}