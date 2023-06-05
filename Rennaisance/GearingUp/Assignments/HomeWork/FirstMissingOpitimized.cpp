#include <bits/stdc++.h>
using namespace std;

int firstMissingSmallestPositive(int arr[], int n)
{
    // Step 1 : Mark each element out of the range as 1.
    bool one = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            one = true;
        }
        
        if (arr[i] < 1 || arr[i] > n)
        {
            arr[i] = 1;
        }
    }
    if (one == false)
    {
        return 1;
    }

    // Step 2 : map the indexes

    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        arr[index - 1] = -abs(arr[index - 1]);
    }

    // step 3: finding the missing number:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            return i + 1;
        }
    }
    return n + 1;
}

int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = firstMissingSmallestPositive(arr, n);
        cout << ans;
        cout << "\n";
    }

    return 0;
}