/*TC = O(N)*/
#include<iostream>
using namespace std;

int main()
{
    int array[] = {1,1,0,0,0,0,1,1,1,1,1,0};
    int n = sizeof(array)/sizeof(array[0]);
    int count = 0;
    int max = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(array[i] == 1)
        {
            count ++;
            if(count > max)
            {
                max = count;
            }
        }
        else{
            count = 0;
        }
    }

    cout << "maximum number of 1s together is : " << max;

    return 0;
}