#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cout << "n: ";
    cin >> n;
    int a[n];
    cout << "Array: ";
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    int mini = a[0];
    int index_mini = 0;
    for(int i = 1 ; i < n - 1 ; i ++) //O(n)
    {
        if(mini > a[i])
        {
            mini = a[i];
            index_mini = i;
        }
    }

    int maxi = a[index_mini + 1];
    for(int j = index_mini + 2 ; j < n ; j ++) // O(n)
    {
        maxi =  max(a[j],maxi);
    }

    if(maxi <= mini)
    {
        cout << 0;
    }else{
        cout << maxi - mini;
    }

    return 0;
}