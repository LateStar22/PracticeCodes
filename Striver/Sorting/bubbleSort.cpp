/*
In bubble sort we keep on pushing largest element towards end
*/

#include<iostream>
using namespace std;

int main()
{
    int num[5] = {6,5,4,3,2},i,j,round = 0;

    for(i = 1 ; i < 5 ; i ++)
    {
        cout << "Round : " << ++round << endl;

        for(j = 0 ; j < 5 - i ; j ++) // important, j is shrinking as per the value of i. main loop for bubble sort.
        {
            if(num[j + 1] < num[j] )
            {
                int temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }

    cout << "Sorted Array is : " << endl;

    for(j = 0 ; j < 5 ; j ++)
    {
        cout << num[j] << " ";
    }

}