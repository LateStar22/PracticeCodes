#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,p,q,r;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter vlaues p q and r: ";
    cin >> p >> q >> r;
    int a[n];
    cout << "Enter elements in array: ";
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for(int j = 1 ; j < n - 1 ; j ++)
    {
        int PMAX[j]; // here in thid approach,iam calculating PMAX and SMAX for every value of J. Hence it has TC O(n ^ 2);//i should have calculated PMAX and SMAX in advance, pMAX(j = 1 to j < n), SMAX(j = n - 2 to j >= 0)
        int SMAX[n - 1 - j];
        PMAX[0] = a[0];
        for(int i = 1 ; i < j ; i ++)
        {
            PMAX[i] = max(PMAX[i - 1],a[i]);
        }

        SMAX[0] = a[j + 1];
        for(int i = 1 ; i < (n - 1) - j ; i ++)
        {
            SMAX[i] = max(SMAX[i - 1],a[j + i + 1]);
        }
        ans = max(ans,(p*PMAX[j - 1] + q*a[j] + r*SMAX[(n - 1 - j) - 1]));
    }
    cout << "Final ans : "<< ans;
    return 0;
}