#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for(int i = 0 ; i < n ; i ++)
    {
        int mini = i;
        for(int j = i + 1 ; j < n ; j ++)
        {
            if(a[j] < a[mini] )
            {
                mini = j;
            }
        }
        int temp = a[mini];
        a[mini] = a[i];
        a[i] = temp;
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

    selectionSort(a,n);
    return 0;
}