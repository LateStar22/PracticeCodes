#include<iostream>
using namespace std;

int search(int arr[], int n)
{
    int i = 0;

    while(i != n)
    {
        if(arr[i] == arr[i + 1])
        {
            i = i + 2;
        }
        else 
        {
            break;
        }
    }

    return arr[i];
}

int main()
{
    int arr[] = {1,2,2,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = search(arr,n);
    cout << "Number appearing once is : "<< ans;
    return 0;
}