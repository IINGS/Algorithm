#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    for(int i=0; i<sizes.size(); i++)
    {
        if(sizes[i][0]<sizes[i][1])
        {
            int temp = sizes[i][1];
            sizes[i][1] = sizes[i][0];
            sizes[i][0] = temp;
        }
    }
    int a = sizes[0][0];
    int b = sizes[0][1];
    for (int i=0; i<sizes.size(); i++)
    {        
        if(sizes[i][0]>a) a=sizes[i][0];
        if(sizes[i][1]>b) b=sizes[i][1];        
    }
    return a*b;
}