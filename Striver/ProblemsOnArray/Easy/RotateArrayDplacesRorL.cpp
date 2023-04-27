#include<iostream>
using namespace std;

void rotateRight(int arr[], int n, int d)
{
     cout << "\n" << "Inside RotateRight Function: " << "\n";
    for(int i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }
}

void rotateleft(int arr[], int n , int d)
{
    int temp[d];
    int i;
    for(i = 0 ; i < d ; i ++)
    {
        temp[i] = arr[i];
    }

    for(i = d ; i < n ; i ++)
    {
        arr[i - d] = arr[i];

        if(i == n - d || i == n - (d - 1) || i == n - (d - 2))
        {
             arr[i] = temp[i - n + d]; /// complete game is here ****
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9},i;
    int d = 6;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Size of array: " << n << "\n";
    cout <<"Array before rotating\n";
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    rotateleft(arr,n,d);
    cout << "Array after rotation\n";
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }
    rotateRight(arr,n,d);


    return 0;
}