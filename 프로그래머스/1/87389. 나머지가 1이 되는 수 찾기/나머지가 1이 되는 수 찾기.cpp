#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x=1;
    while(x < n)
    {
        x++;
        answer=x;
        if(n%x == 1) break;
    }
    return answer;
}