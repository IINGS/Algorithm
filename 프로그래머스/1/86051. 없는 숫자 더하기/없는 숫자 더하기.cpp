#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    int nlen = numbers.size();
    for (int i=0; i<nlen; i++)
    {
        answer -= numbers[i];
    }
    return answer;
}