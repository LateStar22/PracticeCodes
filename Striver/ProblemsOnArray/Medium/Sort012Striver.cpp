/*Dutch Flag Algorithm 
TC : O(N)
SC : O(1)*/

#include<iostream>
using namespace std;

void sort012ThreePointerApproach(int arr[], int n)
{
    int lo = 0;
    int mid = 0;
    int hi = n - 1;

    while(mid <= hi)
    {
        switch(arr[mid])
        {
            // mid = 0
            case 0: 
            swap(arr[mid++],arr[lo++]);
            break;

            case 1:
            mid++;
            break;

            case 2:
            swap(arr[mid],arr[hi--]);
            break;
            
        }
    }

    cout << "Answer array is : " << endl;

    for(int i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int nums[] = {2,2,2,2,2,2,2,2,2,0,1,1,1,2,1,1,1,1,1};

    int len = sizeof(nums)/sizeof(nums[0]);
    cout << "length of array is : " << len << endl;
    sort012ThreePointerApproach(nums,len);
    return 0;
}