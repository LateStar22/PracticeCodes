#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // counting number of distinct elements: To figure out thr number of different groups to be formed;
        int distinct_element_count = 0;
        for (int i = 0; i < n ; i++)
        {
            int j = i;
            if (a[i] == a[j] && a[i] > 0)
            {
                distinct_element_count++;
                j++;
                while (j < n)
                {
                    if (a[i] == a[j])
                    {
                        a[j] = -a[i];
                    }
                    j++;
                }
            }
        }        

        int numberOfgroups = distinct_element_count;
        cout << "Number of groups : " << numberOfgroups << "\n";

        for(int i = 0 ; i < n ; i ++ )
        {
            if(a[i] < 0)
            {
                a[i] = (a[i] * -1);
            }
        }

        for(int i = 0 ; i < n ; i ++)
        {
            int count = 0;
            for(int j = 0 ; j < n ; j ++)
            {
                if(a[i] == a[j])
                {
                    count ++;
                }
                if(count > (n / numberOfgroups))
                {
                    cout << "false";
                    cout << "\n";
                    return 0;
                }
            }
        }

        if (n % numberOfgroups == 0 && n / numberOfgroups >= 2)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
        cout << "\n";
    }
    return 0;
}