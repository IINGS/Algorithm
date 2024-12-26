#include <iostream>
#include <cmath>

using namespace std;

int solution(int n)
{
    int answer = 0;
    
    for(int i=0; i<=8; i++)
    {
        answer += n % int(pow(10,i+1)) / pow(10,i);
    }
    
    

    return answer;
}