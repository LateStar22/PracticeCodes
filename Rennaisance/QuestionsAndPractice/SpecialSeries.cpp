//For N = 4
//O/P : 1,11,111,1111


#include <iostream>
using namespace std;
int main()
{
    // int n, i, j, sum = 1;
    // cin >> n;

    // i = 1;
    // j = 1;
    // while (j <= n)
    // {
    //     if (j == 1)
    //     {
    //         cout << "1 ";
    //     }
    //     else
    //     {
    //         sum = sum + (i * 10);
    //         cout << sum << " ";
    //         i = i * 10;
    //     }

    //     j++;
    // }

    // BEST APPROACH:

    int sum = 0,i = 1,n;
    cin >> n;
    while(i <= n)
    {
        sum = (sum * 10) + 1;
        cout << sum << " ";
        i++;
    }
    return 0;
}