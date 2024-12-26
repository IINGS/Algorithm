#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i=1;
    while (i<=n)
    {
        answer += n % i == 0 ? i : 0;
        i++;
    }
    
    
    return answer;
}