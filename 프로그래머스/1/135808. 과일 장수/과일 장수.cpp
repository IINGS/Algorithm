#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int slen = score.size();
    if (m > slen) return answer;
    
    sort(score.rbegin(), score.rend());

    for (int i = 0; i < slen / m; i++)
    {
        answer += score[m * (i + 1) - 1] * m;
    }
    
    
    return answer;
}