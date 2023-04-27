//Approach : We consider a set of array to be already sorted and perform operation on unsorted array.We take first
//first element of unsorted array and check if it is smaller than element of already sorted array the swap.

#include<iostream>
using namespace std;

void insertionSort(int a[],int n)
{
    for(int i = 1 ; i < n ; i ++) // starting with i = 1 as we are considering that i = 0, already sorted.
    {
        int j = i;
        while(j > 0 && a[j - 1] > a[j]) //ascending order
        {
            swap(a[j],a[j - 1]);
            j--;
        }
    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    insertionSort(a,n);
    return 0;
}