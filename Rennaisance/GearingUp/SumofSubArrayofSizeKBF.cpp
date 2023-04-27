// TC O (n ^ 2)

#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cout << "n: ";
    cin >> n;
    int k;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    cout << "k: ";
    cin >> k;

    int ans = 0;
    for(int i = 0 ; i <= n - k ; i ++)
    {
        int sum = 0;
        for(int j = i ; j < i + k ; j ++)
        {
            sum += a[j];
        }
        cout << sum << " ";
    }
    

    return 0;
}