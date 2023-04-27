#include<iostream>
using namespace std;

int main()
{
    int arr[100] = {5,1,6,8};
    int n;
    cout << "Enter the size of array\n";
    cin >> n;

    for(int i = n - 1 ; i >= 0 ; i --)
    {
       cout << arr[i] << " ";
    }
    

   return 0;
}