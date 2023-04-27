#include<iostream>
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

    int maxi = a[0];
    int mini = a[0];
    for(int i = 0 ; i < n ; i ++)
    {
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
    }

    int ind_max = 0;
    int ind_min = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(a[i] == maxi)
        {
            ind_max = i;
            break;
        }
    }
    for(int j = n - 1 ; j > 0 ;  j --)
    {
        if(a[j] == mini)
        {
            ind_min = j;
            break;
        }
    }

    int count_max = 0;
    int count_min = 0;
    if(ind_max > ind_min)
    {
        ind_min++;
        count_max = ind_max;
        count_min = (n - 1) - ind_min;
    }else{
        count_max = ind_max;
        count_min = (n - 1) - ind_min;
    }

    cout << count_max + count_min;
    return 0;
}