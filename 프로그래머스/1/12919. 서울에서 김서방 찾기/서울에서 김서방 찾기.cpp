#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 에 있다";
    int slen = seoul.size();
    for(int i = 0; i < slen; i++)
    {
        if(seoul.at(i) == "Kim")
            answer.insert(13,to_string(i));
    }
    return answer;
}