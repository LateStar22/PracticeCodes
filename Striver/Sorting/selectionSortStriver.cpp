#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i,j;
    for(i = 0 ; i < n - 1 ; i ++)
    {
        int mini = i;
        for(j = i + 1 ; j < n ; j++)
        {
            if(arr[j] < arr[mini]) // important
            {
                mini = j;
            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout << "Array after sorting: ";
    for(i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {13,46,24,52,20,9},i;

    int n = sizeof(arr)/sizeof(arr[0]);

    cout <<"Array before sorting\n";

    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    selectionSort(arr,n);
    return 0;
}