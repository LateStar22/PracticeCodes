/* Best Approach

Time Complexity: O(N), Single-pass solution

Space Complexity: O(1)*/
#include<iostream>
using namespace std;

int secondSmallest(int arr[], int n)
{
    if(n < 2)
    {
        return - 1;
    }
    int i;
    int small = INT16_MAX ;
    int second_small = INT16_MAX;
   

    for(i = 0 ; i < n ; i ++)
    {
        if(arr[i] < small)
        {
            second_small = small;
            small = arr[i];
            
        }
        if(arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }

    return second_small;

}

int secondLargest(int arr[], int n)
{
    if(n < 2)
    return -1;
    int large = INT16_MIN, second_large = INT16_MIN;
    int i;

    for(i = 0 ; i < n ; i ++)
    {
        if(arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        if(arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    return second_large;
}

int main()
{
    int arr[] = {10,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sS = secondSmallest(arr,n);
    int sL = secondLargest(arr,n);

    cout << "Second Small : " << sS << endl;
    cout << "Second largest : " << sL;

    return 0;
}