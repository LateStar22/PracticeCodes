#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    cout << "Enter the number of pillars";
    int n;
    cin >> n;
    cout << "Enter the sizes of pillars\n";
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    // PMAX: .. stores max values in Ascending order.
    int PMAX[n];
    PMAX[0] = a[0];
    for(int i = 1 ; i < n ; i ++)
    {
        PMAX[i] = max(PMAX[i - 1], a[i]);
    }

    //SMAX: .. stores max values in Descending order.
    int SMAX[n];
    SMAX[n - 1] = a[n - 1];
    for(int i = n - 2; i >= 0 ; i --)
    {
        SMAX[i] = max(SMAX[i + 1],a[i]);
    }

    //Water Trapped:
    int ans = 0;
    int mini = 0;
    for(int i = 1 ; i < n - 1 ; i ++)
    {
        mini = min(PMAX[i - 1],SMAX[i + 1]);
        if(mini > a[i])
        {
            ans += (mini - a[i]);
        }
    }

    cout << "Final Answer: " << ans;

    return 0;
}