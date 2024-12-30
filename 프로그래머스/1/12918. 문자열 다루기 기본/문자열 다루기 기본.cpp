#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size()!=4&&s.size()!=6)
        answer=false;
    else
    {
        for (int i=0;i<6;i++)
        {
            if(s[i]>57)
                answer=false;
        }
    }
    return answer;
}