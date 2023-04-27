/*Not the best solution but better solution with T.C O(N)*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int FindMajorityElement(int arr[], int n)
{
    int i = 0;
    int count = 0;
    sort(arr,arr + n);
    for(int j = 0 ; j < n ; j ++)
    {
        if(arr[i] == arr[j])
        {
            count ++;
        }
        if(count > n / 2)
        {
            return arr[i];
        }
        if(arr[j] > arr[i])
        {
            i = j;
            count = 1;
        }
    }
    return -1;
}

int main()
{
    int nums[]=  {2,2,1,1,1,2,2,1,1,1,1,1};
    int size = sizeof(nums)/sizeof(nums[0]);

    int ans = FindMajorityElement(nums,size);

    cout << "Answer is : " << ans;
}