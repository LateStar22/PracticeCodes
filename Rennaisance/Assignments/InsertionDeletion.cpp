#include<iostream>
using namespace std;

// void insert(int k,int a[],int n,int n1,int number)
// {
//     for(int i = n1 - 1 ; i >= k ; i--)
//     {
//         a[i + 1] = a[i];
//     }
//     a[k] = number;

//     cout << "Array after Inserting " << number << ": ";
//     for(int i = 0 ; i < n1 ; i ++)
//     {
//         cout << a[i]<< " ";
//     }
//     cout << "\n";
// }

void delettion(int k,int a[],int n,int n1)
{
    for(int i = k ; i < n1 ; i++)
    {
        a[i] = a[i + 1];
    }
    cout << "Array after Deleting : " << "\n";
    for(int i = 0 ; i < n1 - 1 ; i ++) // n1 - 1 just not to print garbage value
    {
        cout << a[i]<< " ";
    }
}
int main()
{
    int n,n1,number,index;
    cout << "Array Size : ";
    cin >> n;
    cout << "Enter the number of elements to put : ";
    cin >> n1;
    // cout << "Enter the number to insert : ";
    // cin >> number;
    cout << "Enter index to put/delete number on : ";
    cin >> index;
    int a[n];
    cout << "Enter Values in array : " <<"\n";
    for(int i = 0 ; i < n1 ; i ++)
    {
        cin >> a[i];
    }
    // insert(index,a,n,n1,number);
    delettion(index,a,n,n1);
    return 0;
}