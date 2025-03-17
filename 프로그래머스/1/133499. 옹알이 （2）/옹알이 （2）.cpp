#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> basic = { "aya", "ye", "woo", "ma" };
    vector<string> warning = { "ayaaya", "yeye", "woowoo", "mama" };
    
	for (int i = 0; i < babbling.size(); i++)
	{
		for (string s : warning)
		{
			size_t pos = 0;
			while ((pos = babbling[i].find(s, pos)) != string::npos)
			{
				babbling[i].erase(pos, s.size());
				babbling[i].insert(pos, "worng");
			}
		}
	}
	for (int i = 0; i < babbling.size(); i++)
	{
		for (string s : basic)
		{
			size_t pos = 0;
			while ((pos = babbling[i].find(s, pos)) != string::npos)
			{
				babbling[i].erase(pos, s.size());
                babbling[i].insert(pos, " ");
			}
		}
	}
    for (int i = 0; i < babbling.size(); i++)
	{
        size_t pos = 0;
        string empty = " ";
        while ((pos = babbling[i].find(empty, pos)) != string::npos)
        {
            babbling[i].erase(pos, 1);
        }
	}
	answer = count(babbling.begin(), babbling.end(), "");
    return answer;
}