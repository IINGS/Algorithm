#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for (int i=s.size()-1; i>=0; i--)
    {
        int j = find(s.rbegin()+i+1,s.rend(),s[s.size()-i-1]) - s.rbegin();
        if(j==s.size())
        {
            j=-1;
        }else
        {
            j-= find(s.rbegin()+i,s.rend(),s[s.size()-i-1]) - s.rbegin();
        }
            
        answer.push_back(j);
    }
    return answer;
}