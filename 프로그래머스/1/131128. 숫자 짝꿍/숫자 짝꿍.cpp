#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int X_freq[10] = {0}, Y_freq[10] = {0};
    
    for (char c : X)
    {
        X_freq[c-'0']++;
    }
    for (char c : Y)
    {
        Y_freq[c-'0']++;
    }
    
    int result[10] = {0};
    for(int i=0;i<10;i++)
    {
       result[i] = min(X_freq[i], Y_freq[i]);
    }
    for (int i=9;i>=0;i--)
    {
        while(result[i])
        {
            answer += ('0' + i);
            result[i]--;
        }
    }
    
    if(answer.empty()) return "-1"; 
    if(answer[0] == '0') return "0";
    
    
    return answer;
}