#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> mj;
    for (int i=0; i<score.size(); i++)
    {
        mj.push_back(score[i]);
        sort(mj.rbegin(),mj.rend());
        if(mj.size()>k)
        {
            mj.pop_back();
        }
        int mink = *min_element(mj.begin(),mj.end());
        answer.push_back(mink);
    }
    return answer;
}