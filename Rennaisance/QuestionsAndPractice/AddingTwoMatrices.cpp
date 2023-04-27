#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int m;
    cin >> m;
    int n;
    cin >> n;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    for(int i = 0 ; i < m ; i ++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < m ; i ++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "\n";

    for(int i = 0 ; i < m ; i ++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0 ; i < m ; i ++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}