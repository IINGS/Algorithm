#include <iostream>
#include <algorithm>

int n;
int dp[101];
int digit[10]={0,1,1,1,1,1,1,1,1,1};
int temp[10];

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    dp[1]=9;
    for(int i=2;i<=100;i++)
    {
        temp[0]=digit[1];
        temp[1]=digit[0]+digit[2];
        temp[2]=digit[1]+digit[3];
        temp[3]=digit[2]+digit[4];
        temp[4]=digit[3]+digit[5];
        temp[5]=digit[4]+digit[6];
        temp[6]=digit[5]+digit[7];
        temp[7]=digit[6]+digit[8];
        temp[8]=digit[7]+digit[9];
        temp[9]=digit[8];
        
        long long sum = 0;
        for(int j=0;j<10;j++)
        {
            temp[j] %= 1000000000;
            sum += temp[j];
        }
        copy(temp,temp+10,digit);
        
        dp[i] = sum % 1000000000;
    }

    cin >> n;
    cout << dp[n];
    
    return 0;
}