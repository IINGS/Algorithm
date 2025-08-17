#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    
    vector<int> parts;
    istringstream iss(input);
    string part;
    
    while(iss>>part)
    {
        parts.push_back(stoi(part));
    }
    
    if (parts[0]>parts[1])
    {
        cout << ">";
    }
    else if (parts[0]<parts[1])
    {
        cout << "<";
    }
    else if (parts[0]==parts[1])
    {
        cout << "==";
    }
    
    return 0;
}