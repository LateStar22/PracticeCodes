#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n][3];

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < 3 ; j ++)
        {
            cin >> a[i][j];
        }
    }

    int flag = 1;
    for(int j = 0 ; j < 3 ; j ++)
    {
        int sum = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            sum = sum + a[i][j];
        }
        if(sum != 0 )
        {   
            cout << "NO" << endl;
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "YES" << endl;
    }

    return 0;
}