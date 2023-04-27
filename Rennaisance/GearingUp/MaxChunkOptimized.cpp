#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];
    int i = 0;
    while(i < n)
    {
        cin >> a[i];
        i ++;
    }

    // calculated in O(n) time.
    int PMAX[n];
    PMAX[0] = a[0];
    for(int i = 1 ; i < n ; i ++)
    {
        PMAX[i] = max(PMAX[i - 1],a[i]);
    }

    int ans = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(PMAX[i] == i)
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}