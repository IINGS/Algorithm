#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        for(int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int a = nums[i] + nums[j] + nums[k];
                int buffer = 0;
                for(int l = 2; l <= a / 2; l++)
                {
                    if (a % l == 0) buffer++;
                }
                if (buffer == 0) answer++;
            }
        }
    }
    
    
    return answer;
}