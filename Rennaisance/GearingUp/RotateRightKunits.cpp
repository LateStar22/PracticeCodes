#include <iostream>
using namespace std;

void rotateRight(int a[], int n, int d)
{
    int count = d % n;
    while(count --)
    {
        int temp = a[n - 1];
        for(int i = n - 2 ; i >= 0 ; i --)
        {
            a[i + 1] = a[i];
        }
        a[0] = temp;
    }
}
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,d;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    cout << "Enter units to rotate: ";
    cin >> d;
 
        rotateRight(a,n,d);
    
    cout << "Array after rotation: ";
    for(int i = 0 ; i < n ; i ++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}