#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int a[6][6],i,j;

    for(i = 1 ; i <= 5 ; i ++)
    {
        for(j = 1 ; j <= 5 ; j ++)
        {
            cin >> a[i][j];
        }
    }

    int r,c;
    for(i = 1 ; i <= 5 ; i ++)
    {
        for(j = 1 ; j <= 5 ; j ++)
        {
            if(a[i][j] == 1)
            {   
                r = i;
                c = j;
            }
        }
    }
    cout << abs(r - 3) + abs(c - 3);
    return 0;
}