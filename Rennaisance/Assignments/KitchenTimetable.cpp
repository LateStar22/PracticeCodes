#include<iostream>
using namespace std;
int main()
{
    int n,count = 0;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin >> b[i];
    }

    for(int i = 0 ; i < n ; i ++)
    {
        if(i == 0)
        {
            if(a[i] >= b[i])
            {
                count ++;
            }
        }
        else{
            if(a[i] - a[i - 1] >= b[i])
            {
                count ++;
            }
        }
    }

    cout << count;
    return 0;
}