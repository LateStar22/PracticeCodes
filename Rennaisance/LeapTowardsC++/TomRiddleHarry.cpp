#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n; 
    cin >> n;
    string a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    cout << "\n";
    for(int i = n - 1 ; i >= 0 ; i --)
    {
        int flag = 0;
        for(int j = i - 1 ; j >= 0 ; j -- )
        {
            if(a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            a[i] = "YES";
        }else{
            a[i] = "NO";
        }
    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << a[i] << "\n";
    }


    return 0;
}