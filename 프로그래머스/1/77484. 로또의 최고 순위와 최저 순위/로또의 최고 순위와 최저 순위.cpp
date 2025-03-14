#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int min = 7;
    for(int i=0; i<lottos.size(); i++)
    {
        if(find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end())
        {
            min--;
        }
    }
    int max = min - count(lottos.begin(), lottos.end(), 0);
    if (min==7) min = 6;
    if (max==7) max = 6;
    answer = {max,min};
    return answer;
}