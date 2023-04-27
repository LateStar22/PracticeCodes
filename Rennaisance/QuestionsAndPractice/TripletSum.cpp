#include<iostream>
using namespace std;
int main()
{
    
    //Use Pen and paper to first solve the problem. Then, write the code.
    int x,n;
    int a[100];

    cout << "Enter number of array elements" << "\n";
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    int sum;
    cout << "Enter the triplet sum: ";
    cin >> sum;

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            for(int z = j + 1 ; j < n ; j ++)
            {
                if(a[i] + a[j] + a[z] == sum)
                {
                    cout <<"("<< a[i] <<","<< a[j] <<","<< a[z] << ")";
                }
            }
        }
    }
    return 0;
}