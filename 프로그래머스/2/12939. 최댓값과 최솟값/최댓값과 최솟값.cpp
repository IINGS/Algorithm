#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    s += " ";
    string answer = "";
    string temp = "";
    vector<int> v;
    for(char c : s)
    {
        if(c == ' ')
        {
            v.push_back(stoi(temp));
            temp = "";
        }else
        {
            temp += c;
        }
    }
    sort(v.begin(),v.end());
    answer = to_string(v.front()) + " " + to_string(v.back());
    
    return answer;
}