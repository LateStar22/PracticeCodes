#include <iostream>
#include <cstring>
using namespace std;

int maxGap(int arr[], int n)
{
    if (n < 2)
    {
        return 0;
    }

    int minNum = arr[0], maxNum = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxNum = max(maxNum, arr[i]);
        minNum = min(minNum, arr[i]);
    }

    if (maxNum == minNum)
    {
        return 0;
    }

    int gap = (maxNum - minNum) / (n - 1);
    if (((maxNum - minNum) % (n - 1)) != 0)
    {
        gap = gap + 1;
    }

    int MIN[n], MAX[n];

    fill_n(MIN, n, INT32_MAX);
    fill_n(MAX, n, INT32_MIN);

    //Finding bucket in which element belongs
    for (int i = 0; i < n ; i++)
    {
        int bkt = (arr[i] - minNum) / gap;
        MIN[bkt] = min(arr[i], MIN[bkt]);
        MAX[bkt] = max(arr[i], MAX[bkt]);
    }

    int prev = INT32_MIN, ans = INT32_MIN;
    for (int i = 0; i < n ; i++)
    {
        if (prev == INT32_MIN)
        {
            prev = MAX[i];
        }
        if (MIN[i] == INT32_MAX)
        {
            continue;
        }
        else
        {
            ans = max((MIN[i] - prev), ans);
            prev = MAX[i];
        }
    }
    return ans;
}

int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    while(t--)
    {
        int ans1 = maxGap(arr, n);
        cout << "max gap: " << ans1;
    }

    return 0;
}