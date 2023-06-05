#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0 ; i < n ; i ++)
    {   
        int idx = arr[i];
        int count = 1;
        while(idx != i)
        {
            idx = arr[idx];
            count ++;
        }
        ans = max(count,ans);
    }

    cout << ans;
    return 0;
}