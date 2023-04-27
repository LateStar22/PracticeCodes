/*Amazing question : put i = -1 just to handle edge case like 0 1 2 2 1 0 and 2 1 2 0 0 1*/

#include<iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int i = -1;
    int j;
    for(j = 0; j < n ; j++)
    {
        if(arr[j] < 1)
        {
            i++;
            swap(arr[j],arr[i]); 
        }
    }
    cout << "value of i outside forloop : " << i << endl;
    cout << "value of j outside forloop : " << j << endl; 
    j = i + 1;
        while(j < n)
            {
                if(arr[j] == 1)
                {
                    i++;
                    swap(arr[j],arr[i]);
                    
                }
                j++;
            }

    cout << "Answer array is : " << endl;

    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int nums[] = {2,2,2,2,2,2,2,2,2,0,1,0,1,2,1,1,1,0,2};

    int len = sizeof(nums)/sizeof(nums[0]);
    cout << "length of array is : " << len << endl;
    sort012(nums,len);
    return 0;
}