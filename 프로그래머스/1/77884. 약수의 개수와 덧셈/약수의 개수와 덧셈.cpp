#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int num;
    while(left<=right)
    {
        for (int i=1; i<=left; i++)
        {
            if (left%i==0)
            {
                num+=1;
            }
        }
        answer += (num%2==0)?left:-left;
        num=0;
        left++;
    }
    return answer;
}