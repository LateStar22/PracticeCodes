#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    int PSUM[n];
    PSUM[0] = a[0];
    for(int i = 1 ; i < n ; i ++)
    {
        PSUM[i] = PSUM[i - 1] + a[i];
    }

    int l,r,ans = 0,sum = 0;
    for(int i = 0 ; i < m ; i ++)
    {
        cin >> l >> r;
        if(l == 1)
        {
            sum = PSUM[r - 1];
        }else{
            sum =  PSUM[r - 1] - PSUM[l - 2];
        }

        ans = max(ans,sum + ans);
    }
    cout << ans;

    return 0;
}