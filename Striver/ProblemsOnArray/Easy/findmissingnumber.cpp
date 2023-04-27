#include<iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    int temp[n + 1] = {0};

    for(int i = 0; i < n - 1 ; i ++)
    {
        temp[arr[i] - 1] = 1;
    }

    for(int i = 0 ; i <= n + 1 ; i ++)
    {
        if(temp[i] == 0)
        {
            return i + 1;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 4, 6, 3, 7};
    int n =  sizeof(arr)/sizeof(arr[0]);

    int ans = findMissing(arr, n);

    cout << "Missign number is : " << ans;

    return 0;
}