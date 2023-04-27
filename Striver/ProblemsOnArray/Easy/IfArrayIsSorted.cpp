#include<iostream>
using namespace std;

int main()
{

    int arr[] = {0,1,2,3,4,5},i,count = 0;

    int len = sizeof(arr)/sizeof(arr[0]);

    for(i = 0 ; i < len - 1 ; i ++)
    {
        if(arr[i] < arr[i + 1]) 
        {
            count ++;
        }
    }

    if(count == len - 1)
    {
        if(arr[0] < arr[len - 1])
        {
            cout << "Sorted in Ascending order\n";
        }
        else{
            cout << "Sorted in Descending order\n";
        }
    }
    else{
        cout << "Array is not sorted\n";
    }
    return 0;
}