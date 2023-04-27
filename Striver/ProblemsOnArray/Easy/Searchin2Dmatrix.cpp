/*LeetCode variant where last element of previous row is smaller than the element in first column, hence we can apply binary search*/

#include<iostream>
using namespace std;
const int m = 4 , n = 4;

int searchin2DArray(int mat[m][n], int k)
{
    int start = 0, end  = m * n - 1;

    while(start <= end)
    {
        int mid = (start + end ) / 2;

        if(mat[mid/sizeof(mat[0])][mid%sizeof(mat[0])] == k)
        {
            return k;
        }
        if(mat[mid/sizeof(mat[0])][mid%sizeof(mat[0])] < k)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int target = -1;
    int matrix[4][4] = {{0,1,2,3}, {10,11,16,17}, {23,30,34,50}};
    int ans = searchin2DArray(matrix,target);
    cout << "Answer  : "<<ans;

    return 0;
}