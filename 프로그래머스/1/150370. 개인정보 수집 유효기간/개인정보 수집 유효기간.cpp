#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int year = stoi(today.substr(0,4));
    int month = stoi(today.substr(5,2));
    int day = stoi(today.substr(8,2));
    int today_day = year*12*28 + month*28 + day;
    
    map<char,int> termsMap;
    for(int i=0;i<terms.size();i++)
    {
        termsMap[terms[i].front()] = stoi(terms[i].substr(2));
    }
    
    for(int i=0;i<privacies.size();i++)
    {
        int Pyear = stoi(privacies[i].substr(0,4));
        int Pmonth = stoi(privacies[i].substr(5,2));
        int Pday = stoi(privacies[i].substr(8,2));
        int P_day = Pyear*12*28 + Pmonth*28 + Pday;
        
        if(today_day >= P_day + termsMap[privacies[i].back()]*28)
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}