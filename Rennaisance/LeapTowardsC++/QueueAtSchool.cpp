#include <iostream>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int t;
    cin >> t;
    char a[n + 1];
    int i = 0;
    cin >> a;
    while (t--)
    {
        int i = 0;
        while (a[i] != '\0')
        {
            if (a[i] == 'B' && a[i + 1] == 'G')
            {
                swap(a[i], a[i + 1]);
                i = i + 2;
            }
            else
            {
                i = i + 1;
            }
        }
    }

    for (int i = 0; a[i] != '\0'; i++)
    {
        cout << a[i];
    }

    return 0;
}