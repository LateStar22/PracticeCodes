#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    for(int i = 1 ; i <= n + 1 ; i ++)
    {
        int missingFlag = true;
        for(int j = 0 ; j < n ; j ++)
        {
            if(a[j] == i)
            {
                missingFlag = false;
                break;
            }
        }
        if(missingFlag == true)
        {
            cout << i;
            break;
        }
    }
    return 0;
}