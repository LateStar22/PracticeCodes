#include<iostream>
#include<algorithm>
using namespace std;

class solution
{
    public:
    void quicksort(int arr[], int low, int high)
    {
        if (low < high) {

            int pivot = partition(arr, low, high) ;
            quicksort(arr, low, pivot - 1)  ;
            quicksort(arr, pivot + 1, high)  ;
        }

    }

    int partition(int arr[], int low, int high)
    {
        int pivot = arr[low];
        int i = low;
        int j = high;

        while(i < j)
        {
            while(arr[i] <= pivot && i <= high - 1) // due to this i is never going to be equal to j.
            {
                i++;
            }

            while(arr[j] > pivot && j >= low)
            {
                j--;
            }

            if(i < j) 
            {
                swap(arr[i],arr[j]);/* to handle the case when arr[i] > pivot then i stops 
             there and next while loop of j starts,it will checkk arr[j](high) > pivot or not and it
             will fail(we are assuming arr[high] to be holding value smaller than pivot) so j will hold its position of high and 
             i will be its neighbour where i already has failed condition (arr[i] <= pivot).
             Then we will swap second last elemnt with last one using[if (i < j ) swap(arr[i],arr[j])].
             Then last element of array will be highest one and then finally when very first while 
             loop will fail(as i = j) it will simply swap,swap(arr[j], arr[low])*/
            }
        }
        swap(arr[j],arr[low]);

        return j;
    }

    void printArray(int arr[], int n)
    {
        int i;
        for(i = 0 ; i < n ; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    int i;
    int arr[] = {4, 6, 2, 5, 7, 8, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting\n";
    for(i = 0 ; i < n ; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
    solution obj;
    obj.quicksort(arr,0,n - 1);
    obj.printArray(arr,n);



}