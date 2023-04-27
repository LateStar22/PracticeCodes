#include<iostream>
using namespace std;

void rightDiagonalSum(int a[100][100], int n)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    while(n--)
    {
        sum = sum + a[i][j];
        i++;
        j++;
    }
    cout << "Right Diag  Sum: " << sum << " ";
}

void leftDiagonalSum(int a[100][100], int n)
{
    int i = 0;
    int j = n - 1;
    int sum = 0;
    while(n--)
    {
        sum += a[i][j];
        i++;
        j--;
    }
    cout << "Left Diag Sum: " << sum;
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;;
    int a[100][100];
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            cin >> a[i][j];
        }
    }

    rightDiagonalSum(a,n);
    leftDiagonalSum(a,n);


    return 0;
}