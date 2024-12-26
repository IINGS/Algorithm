#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long x = sqrt(abs(n));
    
    if (x*x == n)
    {
        answer = (x+1)*(x+1);
    }else if ((x+1)*(x+1) == n)
    {
        answer = (x+2)*(x+2);
    }
    return answer;
}