#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5,4,3,2,1},i,count = 0;

    int temp,j,size = 5,step = 0;

    for(i = 0 ; i < (size - 1) ; i++)
    {
        cout << "Step : " << ++step << endl; 
        for(j = i + 1 ; j < size ; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[j];
                cout << "temp is : " << temp << endl;
                arr[j] = arr[i];
                arr[i] = temp; 
                count++;
            }
        }
    }
    for(i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}