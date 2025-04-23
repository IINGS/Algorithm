#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    unordered_map<string,int> pp;
    for(int i=0;i<players.size();i++)
    {
        pp[players[i]]=i;
    }
    
    for(int i=0;i<callings.size();i++)
    {
        int idx = pp[callings[i]];
        swap(players[idx], players[idx-1]);
        pp[players[idx]] = idx;
        pp[players[idx-1]] = idx - 1;
    }
    
    return players;
}