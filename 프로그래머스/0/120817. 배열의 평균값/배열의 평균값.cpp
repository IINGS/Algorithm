#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double sum;
    for(int i:numbers)
    {
        sum = sum + i;
    }
    answer = sum / numbers.size();
    return answer;
}