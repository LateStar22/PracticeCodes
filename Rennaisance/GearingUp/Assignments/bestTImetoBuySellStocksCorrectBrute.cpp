#include <iostream>
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

    int maxi = 0;
    int ans = INT32_MIN; 
    for(int i = 0 ; i < n ; i ++) //TC : O(n ^ 2)
    {
        for(int j = i + 1 ; j < n ; j ++)
        {
            maxi = a[j] - a[i];
            ans = max(ans,maxi);
        }
    }
    if(ans <= 0)
    {
        cout << 0;
    }else{
        cout << ans;
    }
    return 0;
}