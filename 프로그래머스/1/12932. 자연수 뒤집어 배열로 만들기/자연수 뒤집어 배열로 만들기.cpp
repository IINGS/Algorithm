#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int nlen = log10(n) + 1;
    while (nlen>0)
    {
        answer.push_back(n%10);
        nlen -= 1;
        n /= 10;
    }
    return answer;
}