/*Other approach is to have PREFIX_SUM but in that O(n) space will be taken and time O(n^2)*/
/*Secoond Approach : O(n ^ 2) but space O(1) only: for(i = 0 to n - 1) sum = 0 for(j = i to n - 1) sum += a[j]; ans += sum*/
/*Reverse lookup: O(n) space O(1)*/
#include <iostream>
using namespace std;

int getSum(int a[], int n,int i, int j)
{
    int sum = 0;
    for(int k = i ; k <= j ; k ++)
    {
        sum += a[k];
    }
    return sum;
}

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

    //BruteForce: TC O(n ^ 3) O(1).
    int ans = 0;
    for(int i = 0 ; i < n ; i ++) // O(n2) and for each of it we have to run getSum() which will take O(n).
    {
        for(int j = i ; j < n ; j ++)
        {
            ans += getSum(a,n,i,j);
        }
    }
    cout << ans;
    return 0;
}