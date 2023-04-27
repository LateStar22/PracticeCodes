#include <iostream>
using namespace std;

void rotateRightOptimized(int a[], int n, int d)
{

    d = d % n;
    int i = n - d;
    int j = n - 1;
    while(i < j )
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }

    i = 0;
    j = n - d - 1;
    while(i < j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }

    i = 0;
    j = n - 1;
    while(i < j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    cout << "Enter the number elements: " << "\n";
    int n,d;
    cin >> n;
     int a[n];
    cout << "Enter the Array elements: " << "\n";
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    cout << "Enter unts to rotate array : " << "\n";
    cin >> d;
   


    rotateRightOptimized(a,n,d);
    cout << "Array after rotation :" << "\n";
    for(int i = 0 ; i < n ; i ++)
    {
        cout << a[i] << " ";
    }
    return 0;
}