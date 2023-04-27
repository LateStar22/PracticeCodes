#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> a[i];
        }
        cin >> n;
        int b[n];
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> b[i];
        }

        for(int i = 0 ; i < n ; i ++)
        {
            int num1 = a[i] * 10 + b[i];
            int num2 = b[i] * 10 + a[i];
            if(num1 >  num2)
            {
                cout << num1 << " ";
            }else{
                cout << num2 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}