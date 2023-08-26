#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int a[5] = {1,2,3,4};
    int* ptr = a;
    for(int i = 0 ; i < 4 ; i ++)
    {
        cout << &ptr[i] << " ";
    }
    return 0;
}