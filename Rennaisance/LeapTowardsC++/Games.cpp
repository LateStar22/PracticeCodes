#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    vector<pair<int,int>> arr(n);
    int count = 0;

    for(int i = 0 ; i < n ; i ++ )
    {
         cin >> arr[i].first >> arr[i].second;
    }


    for(int i = 0 ; i < n  ; i ++)
    {
        for(int j = 0 ; j < n  ; j ++)
        {
            if(i == j)
            {
                continue;
            }
            if(arr[i].first == arr[j].second)
            {
                count ++;
            }
        }
    }

    cout << count << "\n";

    return 0;
}