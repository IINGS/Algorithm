#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int size;
    size = ((a^b)!=0)+((b^c)!=0)+((a^c)!=0); // 0:모두 겹침, 2:2개겹침, 3:안겹침
    
    int magicnumber = !(size&1) ? (a+b+c-(a^b^c))/2
        : (a-((a-(b-((b-c)&((b-c)>>31))))&((a-(b-((b-c)&((b-c)>>31))))>>31)));
    
    cout << (1000*(1-size/3)+magicnumber*100)*(10*(1-size/2)+(size/2));
    
    return 0;
}