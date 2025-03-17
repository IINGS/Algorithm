#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string standard = "";
    int judge = 0;
    
    //0번 인덱스부터 순회
    for(int i=0;i<s.size();i++) //O(n)
    {
        if(standard == "")
        {
            standard = s[i];
            judge++;
        }
        else if (standard[0] == s[i]) judge++; //O(n)
        else if (standard[0] != s[i]) judge--; //O(n)
        
        
        if(judge == 0)
        {
            standard = "";
            answer++;
        }
    }
    if(!standard.empty()) answer++;
    return answer;
}