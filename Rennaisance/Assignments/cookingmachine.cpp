#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a; // initial value
        cin >> a;
        int b; // desired value
        cin >> b;
        if (a == b)
        {
            cout << "0" <<"\n";
            continue;
        }
        int count = 0;
        while (b % a != 0) // if it fails then it means that "a" is not multiple of 2
        {
            a = a / 2; // so keep dividding it by 2 till it becomes 1 or divides b.
            count++;
        }
        while (b != a)
        {
            a = a * 2;
            count++;
        }
        cout << count <<"\n";
    }

    return 0;
}
