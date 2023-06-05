#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    long long int n;
    cin >> n;
    vector <long long int> a(n);
    for(int i  = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    for(int i = 0 ; i < n ; i ++)
    {
        int old_value = a[i] % n;
        long long int mul = n * i;
        a[old_value] = mul + a[old_value];
    }

    for(int i = 0 ; i < n ; i ++)
    {
        a[i] = a[i] / n;
    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << a[i] << " ";
    }
    return 0;
}