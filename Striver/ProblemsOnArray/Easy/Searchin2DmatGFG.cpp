/*GFG variant :  here we have rows and columns wise sorted and nothing has been said abt last element of previous row and first column*/
#include<iostream>
using namespace std;
const int m = 4 , n = 4;

int searchin2DArray(int mat[m][n], int k)
{

    int i = 0 , j = n - 1;
    while(i < n && j >= 0)
    {
        if(mat[i][j] == k)
        {
            return k;
        }
        if(k > mat[i][j])
        {
            i++;
        }
        else{
            j--;
        }
    }

    return 0;
}

int main()
{
    int target = 15;
    int matrix[4][4] = {{0,1,2,3}, {4,11,16,17}, {15,30,34,50}};
    int ans = searchin2DArray(matrix,target);
    cout << "Answer  : "<<ans;

    return 0;
}