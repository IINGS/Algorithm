#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> choolseokbu;
    
    for(int i=1;i<=30;i++)
    {
        choolseokbu.insert(i);
    }
    for(int i=1;i<=30;i++)
    {
        int student;
        cin >> student;
        choolseokbu.erase(student);
    }
    
    cout << *choolseokbu.begin() << endl;
    cout << *choolseokbu.rbegin() << endl;
    
    return 0;
}