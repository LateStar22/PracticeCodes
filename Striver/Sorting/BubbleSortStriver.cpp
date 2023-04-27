#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int temp,i,j;

    for(i = 0 ; i < n - 1 ; i ++) // just to keep count of rounds. In (n - 1) rounds it will get sorted. And to limit j iteration.
    {
        for(j = 0 ; j < n - i - 1 ; j ++)
        {
            cout << "J : " << j << endl;
            cout << "J + 1 : " << j + 1 << endl;
            if(arr[j] > arr[j + 1]) // j goes till second last element, and we get j + 1 to get last elemnt.
            {
                temp = arr[j]; // in bubble sort index is not updated, as soon as we get condition satisfied, it gets swapped.
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array after swapping \n";
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {6,5,4,3,2,1},i;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting\n";
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    bubbleSort(arr,n);
    return 0;
}