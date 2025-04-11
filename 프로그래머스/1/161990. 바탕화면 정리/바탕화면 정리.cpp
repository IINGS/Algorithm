#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int minx = 50;
    int miny = 50;
    int maxx = 0;
    int maxy = 0;
    
    for(int i=0; i<wallpaper.size(); i++)
    {
        int firstsharp = find(wallpaper[i].begin(), wallpaper[i].end(), '#') - wallpaper[i].begin();
        miny = min(firstsharp, miny);
    }
    
    for(int i=0; i<wallpaper.size(); i++)
    {
        int lastsharp = wallpaper[i].rend() - find(wallpaper[i].rbegin(), wallpaper[i].rend(), '#');
        maxy = max(lastsharp, maxy);
    }
    
    for(int i=0; i<wallpaper.size(); i++)
    {
        if(find(wallpaper[i].begin(), wallpaper[i].end(), '#') != wallpaper[i].end())
        {
            minx = i;
            break;
        }
    }
    
    for(int i=wallpaper.size()-1; i>=0; i--)
    {
        if(find(wallpaper[i].begin(), wallpaper[i].end(), '#') != wallpaper[i].end())
        {
            maxx = i;
            break;
        }
    }
    answer.push_back(minx);
    answer.push_back(miny);
    answer.push_back(maxx + 1);
    answer.push_back(maxy);
    
    return answer;
}