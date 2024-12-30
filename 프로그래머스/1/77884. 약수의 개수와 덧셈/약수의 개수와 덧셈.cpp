#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int det = 0;
    int i = 1;
    for (;left <= right; left++)
    {
        for (; i <= left; i++)
        {
            if (left % i == 0)
            {
                det += 1;
            }
        }
        answer += det % 2 == 0 ? left : -left;
        det = 0;
        i = 1;
    }
    return answer;
}