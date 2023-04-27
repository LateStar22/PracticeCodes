#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    int temp = a[j]; /// only this much part makes it different from selection sort.
                    a[j] = a[i]; // Selection : we increase j all the way to n - 1 till we get minimum element's index
                    a[i] = temp; // Bubble : we swap as soon as we get greater element.
                }
            }
        }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

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

    bubbleSort(a, n);
    return 0;
}