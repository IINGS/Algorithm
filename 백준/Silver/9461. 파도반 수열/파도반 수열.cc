#include <iostream>

long long p[101];

using namespace std;

int main()
{
    int t;
    cin >> t;
    p[1]=1; p[2]=1; p[3]=1; p[4]=2; p[5]=2;
    for(int i=5;i<=100;i++)
    {
        p[i]= p[i-1] + p[i-5];
    }
    
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        cout << p[n] << endl;
    }
    
    return 0;
}