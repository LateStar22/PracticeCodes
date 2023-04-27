#include<iostream>
using namespace std;

class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
        int i = l;
        int j = mid + 1;
        int f = l;
        int temp[1000];

        while(i <= mid && j <=  r)
        {
            if(arr[i] < arr[j])
            {
                temp[f] = arr[i];
                i++;
            }
            else{
                temp[f] = arr[j];
                j++;
            }
            f++;
        }

        if(i > mid)
        {
            while(j <= r)
            {
                temp[f] = arr[j];
                f++ , j++;
            }
        }
        else
        {
            while(i <= mid)
            {
                temp[f] = arr[i];
                f++ , i++;
            }
        }

        //transfering sorted elements from temp to arr;

        for(int f = l ; f <= r ; f++)
        {
            arr[f] = temp[f];
        }

    }

    void mergesort(int arr[], int l, int r)
    {
        if(l < r)
        {
            int mid = (l + r) / 2,step = 1;
            cout << "Step : " << step ++ << endl;
            mergesort(arr,l,mid); // left half
            cout << "Step : " << step ++ << endl;
            mergesort(arr,mid + 1,r); //right half
            cout << "Step : " << step ++ << endl;
            merge(arr,l,mid,r); // merging two soerted halves
        }
    }
};

int main()
{
    int arr[] = {9, 4, 7, 6, 3, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    Solution obj;

    cout << "Before Sorting Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }

    cout << endl;

    obj.mergesort(arr,0,n - 1);
    cout << "Array after sorting\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }

    return 0;
}