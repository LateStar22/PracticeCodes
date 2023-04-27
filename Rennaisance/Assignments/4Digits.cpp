//PERFECT APPROACH.... KEEP IT UPPPPP MANNNNNNNN 

#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    char a[5];
    cin >> a;

    int len = 0;
    while(a[len] != '\0')
    {
        len++;
    }

    int i = len;
    while(i >= 0)
    {
        swap(a[i],a[i + (4 - len)]);
        i--;
    }

    i++;
    while(i < (4 - len))
    {
        a[i] = '0';
        i++;
    }

    cout << a << endl;
    return 0;
}