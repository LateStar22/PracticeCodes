#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int i = 0;
    int n;
    cin >> n;
    int n1 = n;
    while(n1--)
    {
        i++;
        cout << "i :" << i << " ";
    }
    cout << i << " ";
    if(i == n)
    {
        i = 0;
        while(i < n)
        {
            cout << "Aniket" << " ";
            i++;
        }
    }
    cout << "i: at end" << i << " ";    
    return 0;
}