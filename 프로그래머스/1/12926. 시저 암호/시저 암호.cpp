#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int slen = s.size();
    for(int i=0; i<slen; i++)
    {
        if(s[i] >= 97)
        {
            s[i] = s[i] + n < 123 ? s[i] + n : s[i] + n - 26;
        }
        else if(s[i] >= 65)
        {
            s[i] = s[i] + n < 91 ? s[i] + n : s[i] + n - 26;
        }
    }
    return s;
}