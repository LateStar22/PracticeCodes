#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int i = 2;
    while(i <= n)
    {
        int flag = 1;
        for(int j = 2 ; j <= sqrt(i) ; j ++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}