#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    
    int arr[201] = {0};
    
    while(num--)
    {
        int a;
        cin >> a;
        arr[a+101]++;
    }
    
    int finding;
    cin >> finding;
    
    cout << arr[finding+101];
    
    return 0;
}