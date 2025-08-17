#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    
    int answer;
    answer = ((year%100!=0)&&(year%4==0))||(year%400==0) ? 1:0;
    
    cout << answer;
    return 0;
}