#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    long long int arr[n][n];
    memset(arr,0,sizeof(arr));

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j <= i ; j ++)
        {
            if(j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            else{
                int k = i;
                k = k - 1;
                arr[i][j] = arr[k][j - 1] + arr[k][j];
            }
        }
    }

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j <= i ; j ++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}