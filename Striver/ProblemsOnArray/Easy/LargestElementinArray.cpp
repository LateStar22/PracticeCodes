#include<iostream>
using namespace std;

void largestElement(int arr[],int n)
{
    int max = arr[0],i;
    for(i = 0 ; i < n ; i ++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "max value is : " << max;
}


int main()
{
    int arr[] = {67,10,45,12,23,99,1},i;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting\n";
    for(i = 0 ; i < n ; i++)
    {
        cout << arr[i] <<" ";
    }

    cout <<"\n";

    largestElement(arr,n);

    return 0;
}