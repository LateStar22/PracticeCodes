#include <iostream>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    int index = -1;

    int i = 0;
    while (a[i] != a[i + 1])
    {
        for (int i = 0; i < n; i++)
        {
            if (max <= a[i])
            {
                max = a[i];
                index = i;
            }
        }
        cout << "Max : " << max << " ";
        cout << "Index : " << index << "\n";

        for (int i = 0; i < n; i++)
        {
            if (i != index)
            {
                a[i] = a[i] + 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        i++;
    }

    return 0;
}