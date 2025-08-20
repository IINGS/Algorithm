#include <iostream>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    
    while(cases--)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        int d_square = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        int r_diff_square = (r1-r2)*(r1-r2);
        int r_sum_square = (r1+r2)*(r1+r2);
        
        if(d_square == 0 && r1==r2)
        {
            cout << -1 << endl;
            continue;
        }
        else if(d_square>r_sum_square)
        {
            cout << 0 << endl;
            continue;
        }
        else if(d_square==r_sum_square)
        {
            cout << 1 << endl;
            continue;
        }
        else if(d_square<r_sum_square)
        {
            if(r_diff_square>d_square)
            {
                cout << 0 << endl;
                continue;
            }
            else if(r_diff_square==d_square)
            {
                cout << 1 << endl;
                continue;
            }
            else if(r_diff_square<d_square)
            {
                cout << 2 << endl;
                continue;
            }
        }
    }
    
    return 0;
}