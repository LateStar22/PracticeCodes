/*   *  2  3  4  5  6  7 8 9  *
     11 * 13 14 15 16 17 * 19 20   */




#include<iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int i,j,n;
    int count = 0;

    cout << "Enter array length \n";
    cin >> n;
    int flag;

    for(i = 1 ; i <= n ; i ++)
    {
        for(j = 1 ; j <= n ; j ++)
        {
            if( i != j || j != n - (i - 1) )
            {
                count ++;
                cout << count;
                cout << " ";
            }
            else{
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}