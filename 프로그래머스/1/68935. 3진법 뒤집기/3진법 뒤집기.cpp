#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    long long third = 0;
    int adj = 1;
    while(n)
    {
        third *= 10;
        third += n % 3;
        n /= 3;
    }
    while(third)
    {
        answer += (third % 10) * adj;
        adj *= 3;
        third /= 10;
    }
    
    return answer;
}