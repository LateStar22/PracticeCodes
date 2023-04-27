//Here we are polluting the original array, 

#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int l,r;
    cout << "l: ";
    cin >> l;
    cout << "r: ";
    cin >> r;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    for(int i = 1 ; i < n ; i ++) //prefixSum, poluuting the original array
    {
        a[i] += a[i - 1];
    }
    for(int i = 0 ; i < n ; i ++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    if(l == 0 && r != l)
    {
        cout <<"Sum is: " <<  a[r];
    }else if(l == r)
    {
        cout <<"Sum is: " << 2 * a[r];
    }
    else{
        cout << "Sum is: " << a[r] - a[l - 1];
    }
    
    return 0;
}