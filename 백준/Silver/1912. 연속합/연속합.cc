#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        s.push_back(a);
    }
    
    int max = s[0];
    int tempsum = 0;
    
    for(int j=0; j<n; j++)
    {
        if(tempsum<0)
        {
            tempsum = 0;
        }
        
        tempsum += s[j];
        
        if(tempsum>max)
        {
            max = tempsum;
        }
    }
    
    cout << max;
    
    return 0;
}