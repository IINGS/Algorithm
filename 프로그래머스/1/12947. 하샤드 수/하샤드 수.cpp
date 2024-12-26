#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
   
    int y = 0;
    int z = x;
    while(z)
    {
        y += z % 10;
        z /= 10;
    }
    
    bool answer = (x % y == 0) ? true : false;
    return answer;
}