#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    //O(n) time is taken.O(n) space;
    //SMAX is sorted in descending order. We start inserting values from behind
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    int SMAX[n];
    SMAX[n - 1] =  a[n - 1];
    for(int i = n - 2 ; i >= 0 ; i --)
    {
        SMAX[i] = max(SMAX[i + 1],a[i]);
    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << SMAX[i] << " ";
    }

    int maxprofit  = INT32_MIN;
    for(int i = 0 ; i < n ; i ++)
    {
        maxprofit = max((SMAX[i] -  a[i]), maxprofit);
    }

    if(maxprofit <= 0)
    {
        cout << 0;
    }else{
        cout << maxprofit;
    }
    return 0;
}