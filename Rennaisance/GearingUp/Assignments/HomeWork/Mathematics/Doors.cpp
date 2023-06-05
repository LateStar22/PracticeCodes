#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int doors[n];
    for (int i = 1; i <= n; i++)
    {
        doors[i] = 0;
    }

    cout << "Initial State: ";
    for (int i = 1; i <= n; i++)
    {
        cout << doors[i] << " ";
    }

    // Starting rounds: O(n ^ 2)

    int i = 1;
    while (i <= n)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j % i == 0)
            {
                if(doors[j] == 0)
                {
                    doors[j] = 1;
                }else{
                    doors[j] = 0;
                }
            }
        }
        i++;
    }

    cout << "Final State: ";
    for(int i = 1 ; i <= n ; i ++)
    {
        cout << doors[i] << " ";
    }

    int count = -1;
    for(int i = 1 ; i <= n ; i ++)
    {
        if(doors[i] == 0)
        {
            count ++;
        }
    }

    cout <<"Number of doors open: " <<count;
    return 0;
}