#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];
    int ans[n];
    for(int i = 1 ; i <= n ; i ++)
    {
        cin >> a[i];
        ans[a[i]] = i;
    }
    for(int i = 1 ; i <= n ; i ++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}