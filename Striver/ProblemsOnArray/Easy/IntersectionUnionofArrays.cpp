#include<iostream>
using namespace std;

void Union(int common[],int n, int arr1[],int m)
{
    int i = m;
    while(i < n)
    {
        common[i] = arr1[i];
        i++;
    }

    cout << "\n";

    cout << "Union is :" << endl;

    for(i = 0 ; i < n ; i ++)
    {
        cout << common[i] << " ";
    }

}

void intersection(int arr1[],int n, int arr2[], int m)
{
    int common[1000],i,j;

    int z = 0;
    for(i = 0 ; i < m ; i ++) //need to run booth loops only for the smaller array size.
    {
        for(j = i ; j < m ; j ++)
        {
            if(arr1[i] == arr2[j] && common[z - 1] != arr1[i])
            {
                common[z] = arr1[j];
                z++;
            }
        }
    }

    cout << "Intersection is : "<<endl;

    for(z = 0 ; z < m ; z ++)
    {
        cout << common[z] << " ";
    }

    Union(common,n,arr1,m);
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10},i;
    int arr2[] = {1,2,3,4,5,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    cout << "Actual Arrays\n";
    for(i = 0 ; i < n ; i ++)
    {
        cout << arr1[i] << " ";
    }

    cout << "\n";
    
    for(i = 0 ; i < m ; i ++)
    {
        cout << arr2[i] << " ";
    }

    cout <<"\n";

    intersection(arr1,n,arr2,m);

    
}