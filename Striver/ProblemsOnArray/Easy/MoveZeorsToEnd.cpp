#include<iostream>
using namespace std;

void shiftZero(int arr[], int n)
{
    int i;
    for(i = 0 ; i < n ; i ++)
    {
        for(int j = i + 1 ; j < n ; j ++)
        {
            if(arr[i] == 0 && arr[j] != 0)
                {
                    swap(arr[i],arr[j]);
                }
            else if(arr[i] == 0 && arr[j] == 0)
            {
                if(j != n -1 )
                {
                    j++;
                    if(arr[j] != 0)
                    {
                        swap(arr[i],arr[j]);
                        i++;
                    }
                }    
            }
        }
    }

    cout << "Array after Shiffting Zeros\n";
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1},i;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before shifting\n";

    for(i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    shiftZero(arr,n);

    return 0;
}