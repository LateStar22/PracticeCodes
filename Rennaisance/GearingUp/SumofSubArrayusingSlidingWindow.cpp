#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,k;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    cout << "k: " << " ";
    cin >> k;

    //sliding window:
    int sum = 0;
    for(int i = 0 ; i < k ; i ++)
    {
        sum += a[i];
    }
    for(int j = k ; j < n ; j ++)
    {
        cout << sum << " ";
        sum += a[j];
        sum -= a[j - k];
    }
    cout << sum << " ";
    return 0;
}