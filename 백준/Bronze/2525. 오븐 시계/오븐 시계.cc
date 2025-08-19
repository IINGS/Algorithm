#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hour, minute;
    int cost;
    cin >> hour >> minute;
    cin >> cost;
    
    int H, M;
    M = (minute + cost) % 60;
    H = (hour + (minute + cost) / 60) % 24;
    
    cout << H << " " << M;
    
    return 0;
}