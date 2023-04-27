#include<iostream>
using namespace std;

void sortBinaryArray(int arr[], int n)
{
    int i = -1;
    int j;
    for(j = 0 ;  j < n ; j ++)
    {
        if(arr[j] < 1)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    cout << "Array after sorting : "<< endl;

    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int nums[] = {0,1,1,1,1,1,1,0};
    int len = sizeof(nums)/sizeof(nums[0]);
    sortBinaryArray(nums,len);

    return 0;
}