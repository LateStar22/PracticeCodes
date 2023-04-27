/*naive approach : Traversing through whole matrix and keeping count of 1 in each row and updating max. TC : O(m * n - 1) SC = O(1)*/

#include<iostream>
using namespace std;

int count1s(int Arr[4][4])
{
    int max = 0,row;

    for(int i = 0 ; i < 4 ; i ++)
    {
        int count = 0;
        for(int j = 0 ; j < 4 ; j ++)
        {
            if(Arr[i][j] == 1)
            {
                count ++;
            }
        }
        if(count > max)
        {
            row = i;
            max = count;
        }
    }
        if(max == 0)
	    {
	        return -1;
	    }

   return row;
}

int main()
{
    int Arr[4][4] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}};

    int row = count1s(Arr);
    cout << row;


    return 0;
}