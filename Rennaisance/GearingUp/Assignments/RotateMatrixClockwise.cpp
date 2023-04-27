#include <iostream>
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

    for(int j = 0 ; j < n ; j ++)
    {
        for(int i = n - 1 ; i >= 0 ; i --)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}