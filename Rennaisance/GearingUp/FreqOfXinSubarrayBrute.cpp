#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,k,x;
    cout << "n: ";
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    cout << "k: " << " ";
    cin >> k;
    cout << "x: " << " ";
    cin >> x;

    for(int i = 0 ; i <= n - k ; i ++)
    {
        int j = i ;
        int count = 0;
        while(j < i + k)
        {
            if(a[j] == x)
            {
                count++;
            }
            j++;
        }
        cout << "count of x from " << i + 1 << " subarray: " << count << "\n";
    }
    return 0;
}