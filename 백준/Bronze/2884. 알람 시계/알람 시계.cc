#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string original;
    getline(cin, original);
    
    stringstream ss(original);
    
    string hour, minute;
    ss >> hour >> minute;
    
    int time;
    time = stoi(hour) * 60 + stoi(minute) - 45;
    if(time<0)
    {
        time += 1440;
    }
    cout << time / 60 << " " << time % 60;
    
    return 0;
}