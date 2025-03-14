#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    set<int> s(section.begin(), section.end());
    while(s.size())
    {
        for(int i=m-1; i>=0; i--) s.erase(*s.begin()+i);
        answer++;
    }
    return answer;
}