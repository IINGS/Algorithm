#include <cmath>

int yaksu(int n)
{
    int a=0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            a++;
            if (n/i != i) a++;
        }
    }
    return a;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    while(number)
    {
        if(yaksu(number)>limit) answer += power;
        else answer += yaksu(number);
        number--;
    }
    return answer;
}