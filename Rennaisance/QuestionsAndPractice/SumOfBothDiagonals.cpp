#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            cin >> a[i][j];
        }
    }

    int i = 0 ,j = n - 1,sum = 0;
    while (n--)
    {
        /* code */
        sum = sum + a[i][i] + a[i][j];
        i++;
        j--;
    }
    
    if(n % 2 == 0)
    {
        cout << sum;
    }else{
        cout << (sum - a[n/2][n/2]);
    }
    
    return 0;
}