/*Time Complexity : O(n),: O(k) to check x in 1st subarray and O(1) to check x in other subarrays
so, total O(n)*/

#include <iostream>
using namespace std;
int main()
{

    // Use Pen and paper to first solve the problem. Then, write the code.
    int n, k, x;
    cout << "n: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "k: ";
    cin >> k;
    cout << "x: ";
    cin >> x;

    //sliding window:
    int count = 0;
    int i;
    for(i = 0 ; i < k ; i ++) 
    {
        if(a[i] == x)
        {
            count++;
        }
    }
    for(int j = k ; j < n ; j ++) 
    {
        cout << count << "\n";
        if(a[j] == x)
        {
            count++;

        }if (a[j - k] == x)
        {
            count--;
        }
    }
    cout << count;
    return 0;
}