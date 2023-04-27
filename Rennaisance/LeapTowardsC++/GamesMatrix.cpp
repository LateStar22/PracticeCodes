#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n][2];
    for(int i  = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < 2 ; j ++)
        {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            if(i != j && a[i][0] == a[j][1])
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}