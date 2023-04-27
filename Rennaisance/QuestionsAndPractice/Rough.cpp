#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    char a[n + 1];
    cin >> a;
    for(int i = 0 ; a[i] != '\0' ; i ++)
    {
        cout << a[i] << " ";
    }
    return 0;
}