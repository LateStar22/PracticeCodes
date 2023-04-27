#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    //PSUM:
    for(int i = 1 ; i < n ; i ++)
    {
        a[i] = a[i] + a[i - 1];
    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << a[i] << " ";
    }


    //Finding sum of all arrays:
    //TC: O(n ^ 2)
    int sum = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = i ; j < n ; j ++)
        {
            if(i == 0)
            {
                sum += a[j];
            }else{
                sum += a[j] - a[i - 1];
            }
        }
    }

    cout << "Sum: " << sum;
    return 0;
}