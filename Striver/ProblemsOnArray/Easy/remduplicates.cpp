#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int j;
    int i = 0;
    for(j = 1 ; j < n ; j ++)
        {
            if(arr[i] != arr[j])
                {
                    i++;
                    arr[i] = arr[j];
                }
        }
    return i + 1;
}

int main()
{
    int arr[] = {1,1,2,2,3,3,4,4},i;
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before processing\n";
    for(i = 0 ; i < len ; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<"\n";

    int k = removeDuplicates(arr,len);

    cout << "The array after removing duplicate elements is " << endl;

    for(i = 0 ; i < k ; i ++)
    {
        cout <<arr[i] << " ";
    }


    

    return 0;
}