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

    int ans = 0;
    for(int i = 0 ; i < n ; i ++) // TC : O(n2) space : O(1) and tempering is avoided
    {
        int sum = 0;
        for(int j = i ; j < n ; j ++)
        {
            sum += a[j];
            ans += sum;
        }
    }

    cout << ans;

    return 0;
}