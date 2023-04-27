// Break statemnt in inner loop only breaks out of inner loop and executes the outer loop completely
// In this pblm, matreix is a sorted matrix, elements are sorted rowwise and columnwise.TC O(N + M)
#include <iostream>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n,m;
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int k;
    cout << "k: ";
    cin >> k;
    int i = 0,j = m - 1,count = 0;
    int flag = 0;
    while(i < n && j >= 0)
    {
        if(k == a[i][j])
        {
            cout << "True";
            flag = 1;
            break;
        }else if(k < a[i][j])
        {
            i--;
        }
        else{
            j++;
        }
    }

    if(flag == 0)
    {
        cout << "False";
    }

    return 0;
}