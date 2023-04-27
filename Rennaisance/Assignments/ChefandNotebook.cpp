#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,k,n;
        cin >> x >> y >> k >> n;
        int pages[n];
        int Rubles[n];

        for(int i = 0 ; i < n ; i ++)
        {
            cin >> pages[i];
            cin >> Rubles[i];
        }

        int flag = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            if((Rubles[i] <= k) && (pages[i] >= (x - y)))
            {
                cout <<"LuckyChef" << "\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout <<"UnluckyChef" << "\n";
        }
        
    }
    return 0;
}