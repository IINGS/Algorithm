#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    //set에 집어넣기
    set<int> slost, sreserve;
    for(int i=0;i<reserve.size();i++)
    {
        sreserve.insert(reserve[i]);
    }
    for(int i=0;i<lost.size();i++)
    {
        slost.insert(lost[i]);
    }
    //중복되는 값 서로 제거
    for(int i=0;i<lost.size();i++)
    {
        if(sreserve.find(lost[i]) != sreserve.end())
        {
            slost.erase(lost[i]);
        }
        sreserve.erase(lost[i]);
    }
    //초기 리턴(?)값
    int answer = n - slost.size();
    //-1 +1 범위 내 요소 찾기
    for (int r : sreserve)
    {
        if (slost.find(r-1) != slost.end())
        {
            slost.erase(r-1);
            answer++;
            continue;
        }
        else if(slost.find(r+1) != slost.end())
        {
            slost.erase(r+1);
            answer++;
            continue;
        }
    }
    return answer;
}