#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> s, int n) {
    vector<string> answer;
    int size = s.size();
    for(int i = 0; i < size - 1; i++) 
    {
        for(int j = 0; j < size - i - 1; j++) {
            if(s[j][n] > s[j + 1][n])
            {
                swap(s[j], s[j + 1]);
            }
            else if(s[j][n] == s[j + 1][n])
            {
                if(s[j] > s[j + 1])
                {
                    swap(s[j], s[j + 1]);
                }
            }
        }
    }
    return s;
}