#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    map<int,int> m;
    m[1];
    m[2];
    m[3];
    int dumb2[] = {2, 1, 2, 3, 2, 4, 2, 5};
    int dumb3[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int i = 0;
    while(i < answers.size())
    {
        if(i % 5 + 1 == answers[i]) m[1]++;
        if(dumb2[i%8] == answers[i]) m[2]++;
        if(dumb3[i%10] == answers[i]) m[3]++;
        i++;
    }
    int maxval = max({m[1],m[2],m[3]});
    if (m[1]==maxval) answer.push_back(1);
    if (m[2]==maxval) answer.push_back(2);
    if (m[3]==maxval) answer.push_back(3);
    
    
    return answer;
}