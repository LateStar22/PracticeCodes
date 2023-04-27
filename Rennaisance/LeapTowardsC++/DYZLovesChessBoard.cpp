#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int m;
    cin >> m;
    char a[n][m];

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            cin >> a[i][j];
        }
    }
    

    
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            if(((i + j) % 2 == 0) && a[i][j] != '-')
            {
                a[i][j] = 'W';
            }else if(a[i][j] != '-')
            {
                a[i][j] = 'B';
            } 
        }
    }

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }




    return 0;
}