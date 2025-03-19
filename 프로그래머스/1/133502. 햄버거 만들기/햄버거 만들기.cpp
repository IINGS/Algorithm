#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int flag = 0;
    
    for(int i=0; i<ingredient.size(); i++)
    {
        if     (ingredient[i]==1&&flag!=3) {flag = 1;}
        else if(ingredient[i]==2&&flag==1) {flag = 2;}
        else if(ingredient[i]==3&&flag==2) {flag = 3;}
        else if(ingredient[i]==1&&flag==3)
        {
            flag = 0;
            answer++;
            ingredient.erase(ingredient.begin() +i-3,ingredient.begin() +i+1);
            
            if(i>6) i = i-7;
            else i = -1;
        }
        else {flag = 0;}
    }
    
    return answer;
}