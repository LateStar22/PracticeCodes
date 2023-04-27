#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> a[i];
        }

        int flag = 1;
        if(a[0] != 1)
        {
            flag = 0;
        }else if(a[n / 2] != 7)
        {
            flag = 0;
        }else{
            int i = 0;
            int j = n - 1;
            while(i < j)
            {
                if(a[i] != a[j])
                {
                    flag = 0;
                    break;
                }
                if((a[i] + 1) < a[i + 1] || a[j - 1] < a[j])
                {
                    flag = 0;
                    break;
                }
                i++;
                j--;
            }
        }
        if(flag == 0)
        {
            cout << "no" << "\n";
        }else{
            cout << "yes" << "\n";
        }
    }
    return 0;
}