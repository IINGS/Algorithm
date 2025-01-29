#include <string>
#include <vector>

using namespace std;

string solution(int a, int day_factor) {
    string answer = "";
    string day[7] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int month_factor = 0;
    int dayfirst[12] = {0,3,1,3,2,3,2,3,3,2,3,2};
    for (int i=0; i<=a-1;i++)
    {
        month_factor += dayfirst[i];
    }
    int total_factor = (month_factor + day_factor) % 7;
    answer = day[total_factor];
    return answer;
}