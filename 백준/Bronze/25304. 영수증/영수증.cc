#include <iostream>
using namespace std;

int main()
{
    int receipt;
    cin >> receipt;
    int types;
    cin >> types;
    
    while(types--)
    {
        int price, number;
        cin >> price >> number;
        receipt -= price*number;
    }
    cout << (receipt?"No":"Yes");
    
    return 0;
}