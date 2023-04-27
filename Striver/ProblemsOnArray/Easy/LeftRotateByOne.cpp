/* Left rotate means shifting each and very left by one*/

#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[0] ,i;

    for(i = 1 ; i < n ; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;

    cout << "Array after rotation\n";
    for(i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }


}

int main()
{
    int arr[] = {6,7,8,9,10},i;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before roatating\n";
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    rotate(arr,n);

    return 0;
}