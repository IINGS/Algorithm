#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> num;
    string nstr = to_string(n);
    int nlen = nstr.size();
    
    for (int i = 9; i >= 0; i--)
    {
        for(int j = 0; j < nlen; j++)
        {
            if(nstr.at(j) - '0' == i)
            {
                num.push_back(i);
            }
        }
    }
    for (int k=0; k<nlen; k++)
    {
        answer *= 10;
        answer += num[k];
    }
        
    
    
    return answer;
}