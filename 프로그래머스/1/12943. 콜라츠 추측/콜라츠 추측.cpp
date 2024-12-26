#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    for (int i = 1; i <= 500; i++)
    {
        if (num == 1) break;
        else if (num % 2 == 0) 
        {
            num /= 2;
            answer += 1;
        }
        else if (num % 2 == 1)
        {
            num = num * 3 + 1;
            answer += 1;
        }
    }    
    return (num == 1) ? answer : -1;
}