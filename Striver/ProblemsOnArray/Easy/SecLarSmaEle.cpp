#include<iostream>
using namespace std;

void getElements(int arr[], int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;
    int i;
    int small = INT16_MAX , second_small = INT16_MAX;
    int large = INT16_MIN , second_large = INT16_MIN;

    for(i = 0 ; i < n ; i ++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for(i = 0 ; i < n ; i++)
    {
        if(arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
        if(arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    cout << "Second Smallest : " << second_small << endl;
    cout << "Second Largest : " << second_large << endl;
}

int main()
{
    int arr[] = {1,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    getElements(arr,n);

    return 0;
}