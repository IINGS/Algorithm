#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int sum = num;
    while(num--)
    {
        sum += num;
    }
    cout << sum;
    return 0;
}