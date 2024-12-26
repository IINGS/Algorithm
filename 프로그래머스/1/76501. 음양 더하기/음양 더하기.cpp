#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int slen=absolutes.size();
    for(int i=0; i<slen; i++)
    {
        answer += signs[i] ? absolutes[i] : -absolutes[i];
    }
    
    return answer;
}