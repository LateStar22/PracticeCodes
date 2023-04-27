#include <iostream>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int w;
    cin >> w;

    if(w >= 4 && w % 2 == 0)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    } 

    return 0;
}