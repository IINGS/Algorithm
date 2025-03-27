#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<int> result(4);
    vector<string> surveyresult = {"RT", "FC", "MJ", "AN"};
    string zerovalue = "RCJA";
    for(int i=0;i<survey.size();i++)
    {
        if(survey[i]=="RT"||survey[i]=="TR")
        {
            if(survey[i]=="RT") result[0]+=choices[i]-4;
            else result[0]-=choices[i]-4;
        }

        if(survey[i]=="FC"||survey[i]=="CF")
        {
            if(survey[i]=="FC") result[1]+=choices[i]-4;
            else result[1]-=choices[i]-4;
        }

        if(survey[i]=="MJ"||survey[i]=="JM")
        {
            if(survey[i]=="MJ") result[2]+=choices[i]-4;
            else result[2]-=choices[i]-4;
        }

        if(survey[i]=="AN"||survey[i]=="NA")
        {
            if(survey[i]=="AN") result[3]+=choices[i]-4;
            else result[3]-=choices[i]-4;
        }
    }
    
    for(int i=0;i<4;i++)
    {
        answer += (result[i] == 0) ? zerovalue[i] : ((result[i] > 0) ? surveyresult[i][1] : surveyresult[i][0]);
    }
    
    
    
    return answer;
}