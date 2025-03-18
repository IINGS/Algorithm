#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer(targets.size(), 0);
    
    //verticalkeymap 초기화용 사이즈 체크
    int maxsize = 0;
    for(string s : keymap)
    {
        if(s.size()>maxsize)
            maxsize = s.size();
    }
    
    //버튼 클릭 순으로 재조정
    vector<string> verticalkeymap(maxsize, "");
    for(int i=0; i<keymap.size(); i++)
    {
        for(int j=0; j<keymap[i].size();j++)
        {
            verticalkeymap[j] += keymap[i][j];
        }
    }
    
    //비교
    for(int x=0; x<targets.size(); x++) //타겟 인덱스에 접근
    {
        while(targets[x].size()) //타겟 인덱스의 인덱스에 접근
        {
            int flag = 0;
            for(int i=0; i<maxsize; i++) //타겟 인덱스의 인덱스가 verticalkeymap의 i번째 인덱스 안에 있는지 판별
            {
                if(find(verticalkeymap[i].begin(), verticalkeymap[i].end(), targets[x].back()) == verticalkeymap[i].end()) //i번 째에 없다
                {
                    flag = 1;
                    answer[x]++;
                }
                if(find(verticalkeymap[i].begin(), verticalkeymap[i].end(), targets[x].back()) != verticalkeymap[i].end()) //i번 째에 있다
                {
                    answer[x]++;
                    flag = 0;
                    targets[x].pop_back();
                    break;
                }
            }
            if(flag) //targets의 인덱스의 n번째 인덱스가 끝까지 없었다면
            {
                answer[x] = -1;
                break;
            }
        }
    }
    
    return answer;
}