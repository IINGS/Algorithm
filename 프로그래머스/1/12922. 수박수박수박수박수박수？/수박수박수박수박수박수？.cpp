#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    while(n)
    {
        answer.insert(0, n%2==0?"박":"수");
        n-=1;
    }
    return answer;
}