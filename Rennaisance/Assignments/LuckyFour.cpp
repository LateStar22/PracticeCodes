#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        string a;
        cin >> a;
        int count = 0;
        for(int i = 0 ; i <= a.length() ; i ++)
        {
            if(a[i] == '4')
            {
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}