#include <iostream>
using namespace std;
int main()
{
    int n1, n2, maximum, i = 1;
    cin >> n1 >> n2;

    maximum = max(n1, n2);
    while ((maximum % n1 != 0) || (maximum % n2 != 0))
    {
        maximum++; // i could have used break as well
    }
    cout << maximum;
    return 0;
}