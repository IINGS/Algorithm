#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number;
    int plen = phone_number.size();
    for(int i=0; i<plen-4; i++)
    {
        answer.replace(i,1,"*");
    }
    return answer;
}