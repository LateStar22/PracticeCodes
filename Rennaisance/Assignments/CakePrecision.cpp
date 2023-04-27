#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int t;
    cin >> t;
    while(t--)
    {
        char a[130]; // 2 <= a <= 10 ^ 128, it means max number of 128 digits.So, we have taken a[130] -- 0 to 129.
        cin >> a;
        int len = 0;
        while(a[len] != '\0')
        {
            len++;
        }

        cout << "Length : " << len  << " ";
        int j = len - 1;
        while(j >= 0 && a[j] == '9')
        {
            a[j] = '0';
            j--;
        }

        if(j < 0)
        {
            a[0] = '1';
            a[len] = '0';
            len++;
            a[len] = '\0';
        }else{
            a[j] += 1;
        }

        j = 0;
        while(a[j] != '\0')
        {
            cout << a[j];
            j++;
        }
    }
    return 0;
}