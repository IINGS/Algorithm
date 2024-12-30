#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = n;
    int b = m;
    int max, min;
    
    while (b)
    {
        int temp = a % b;
        a = b;
        b = temp;
        max = a;
    }
    answer.push_back(max);
    min = n / max * m;
    answer.push_back(min);
    return answer;
}