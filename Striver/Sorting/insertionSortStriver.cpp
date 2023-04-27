/* Insertion Sort : we are finding the value and putting it on its right place */

#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    int i,j;
    for(i = 1 ; i < n  ; i ++)
    {
        int current = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > current)
        {
                arr[j + 1] = arr[j];
                j --;
           
        }     
        arr[j + 1] = current;
    }

    cout <<"Array after sorting\n";
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " "; 
    }
}

int main()
{
    int arr[] = {13,46,24,52,20,9},i;

    cout << "Array before sorting\n";
    int n  = sizeof(arr)/sizeof(arr[0]);
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }

    cout <<"\n";

    insertionSort(arr,n);
    return 0;
}