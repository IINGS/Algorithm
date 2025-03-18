#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++)
    {
        char temp = s[i];
        int tempindex = index;
        while(tempindex)
        {
            temp++;
            while(find(skip.begin(),skip.end(), temp) != skip.end() || temp>=123)
            {
                temp++;
                if(temp>=123) temp = 97;
            }
            tempindex--;
        }
        answer += temp;
    }
    
    return answer;
}