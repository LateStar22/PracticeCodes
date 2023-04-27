#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,k;
    cout <<"n: ";
    cin >> n;
    int a[n];
    cout << "Array: ";
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    cout <<"k: ";
    cin >> k;

    //Calculating legalElements:
    int legalElemntscount = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(a[i] <= k)
        {
            legalElemntscount ++;
        }
    }

    //slidingWindow:
    int swap = 0;
    for(int i = 0 ; i < legalElemntscount ; i ++)
    {
        if(a[i] > k)
        {
            swap++;
        }
    }
    int ans = swap;
    for(int j = legalElemntscount ; j < n ; j ++)
    {
        if(a[j] > k)
        {
            swap++;
        }
        if(a[j - legalElemntscount] > k)
        {
            swap--;
        }
        ans = min(ans,swap);
    }

    cout << ans;
    return 0;
}