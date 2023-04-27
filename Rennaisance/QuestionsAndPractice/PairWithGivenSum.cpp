#include<iostream>
using namespace std;
int main()
{
    
    //Use Pen and paper to first solve the problem. Then, write the code.
    int x,n;
    cout << "Enter sum : " << "\n";
    cin >> x;
    int a[100],b[100];
    cout << "Enter number of array elements" << "\n";
    cin >> n;
    cout << "\n";
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    int z = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if((a[i] + a[j]) == x)
            {
                cout << "("<< a[i] << "," << a[j] << ")";
            }
        }
    }
    return 0;
}