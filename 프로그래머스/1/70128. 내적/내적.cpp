#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    int n = a.size();
    while(n--)
        answer += a[n] * b[n];
    return answer;
}