#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int slen = arr.size();
    for (int i=0; i<slen; i++)
    {
        if(arr.at(i)%divisor==0)
        {
            answer.push_back(arr.at(i));            
        }
    }
    if (answer.size()==0) answer.push_back(-1);
    sort(answer.begin(),answer.end());
    return answer;
}