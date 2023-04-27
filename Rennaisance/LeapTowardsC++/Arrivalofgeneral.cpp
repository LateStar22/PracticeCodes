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

    int mini = a[0];
    int maxi = a[0];
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }

    int max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxi)
        {
            max_index = i;
            break;
        }
    }

    int count_max = 0;
    for (int i = max_index; i >= 1; i--)
    {
        swap(a[i - 1], a[i]);
        count_max++;
    }

    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mini)
        {
            min_index = i;
        }
    }

    int count_min = 0;
    for (int i = min_index; i < n - 1; i++)
    {
        swap(a[i], a[i + 1]);
        count_min++;
    }
    cout << count_max + count_min;
    return 0;
}