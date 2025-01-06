#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{    
    for (int a = 0; a < s.size(); a++)
    {
        if(s[a] > 96)
        {
            s[a] -= 32;
        }        
    }
    int i = 0;
    int j = 0;
    while(true)
    {
        s[i] != ' ' ? (j % 2 == 1 ? s[i] += 32 : 0) : j = -1;
        i++;
        j++;
        if (i>s.size()) break;
    }
    
    return s;
}