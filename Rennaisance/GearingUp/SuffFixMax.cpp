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
    int idx;
    cout << "Enter the index from which Max to be found: ";
    cin >> idx;

    int suffixMax[n - idx];
    suffixMax[0] = a[idx]; // here it is different from prefixMax
    for(int i = 1 ; i < n - idx ; i ++)
    {
        suffixMax[i] = max(suffixMax[i - 1],a[idx + i]);
    }

    cout <<"PostFixMaxArray: ";
    for(int i = 0 ; i < n - idx ; i ++)
    {
        cout << suffixMax[i] << " ";
    }
    return 0;
}