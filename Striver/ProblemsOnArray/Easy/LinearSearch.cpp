/* Time Complexity: O(n), where n is the length of the array.

Space Complexity: O(1)*/

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int num)
{
    int i;

    for(i = 0 ; i < n ; i ++)
    {
        if(arr[i] == num)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1,10,7,6,5,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 6;
    int ans = linearSearch(arr,n,num);
    cout << num << " is present at index : " << ans;

    return 0;
    
}