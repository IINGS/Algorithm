#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m;
    cin >> m;
    set<int> s;
    int x;
    
    for(int i=0;i<m;i++)
    {
        string cmd;
        cin >> cmd;
        
        if(cmd=="all")
        {
            s = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        }
        else if(cmd=="empty")
        {
            s.clear();
        }
        else
        {
            cin >> x;
            if(cmd=="add")
            {
                s.insert(x);
            }
            else if(cmd=="remove")
            {
                if(s.find(x)!=s.end()) s.erase(x);
            }
            else if(cmd=="check")
            {
                if(s.find(x)!=s.end()) cout << 1 << '\n';
                else cout << 0 << '\n';
            }
            else if(cmd=="toggle")
            {
                if(s.find(x)!=s.end()) s.erase(x);
                else s.insert(x);
            }
        }
    }

    return 0;
}
