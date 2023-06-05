#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int v[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> v[i];
    }

    //Moore's voting algorithm:
    int count = 0, el, flag = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(count == 0 )
        {
            el = v[i];
        }
        if(v[i] == el)
        {
            count ++;
        }else{
            count --;
        }
    }
    
    int cnt1 = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(v[i] == el)
        {
            cnt1 ++;
        }
    }
    if(cnt1 > n / 2)
    {
        cout << el;
    }else{
        cout << -1;
    }
    return 0;
}