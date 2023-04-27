#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            cin >> a[i][j];
        }
    }

    int target;
    cin >> target;

    int i = 0;
    int j = m - 1;
    int flag = 0;
    while(n*m--)
    {
        if(a[i][j] == target)
        {
            cout << "True" << "\n";
            flag = 1;
            break;
        }else if(target < a[i][j])
        {
            j--;
        }else{
            i++;
        }
    }
    if(flag == 0)
    {
        cout << "false" << "\n";
    }

    return 0;
}