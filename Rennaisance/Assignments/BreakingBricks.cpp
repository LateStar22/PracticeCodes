#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s,w1,w2,w3;
        cin >> s >> w1 >> w2 >> w3;

        if( s >= w1 + w2 + w3)
        {
            cout << 1 << "\n";
        }else if(s >= w1 + w2 || s >= w2 + w3)
        {
            cout << 2 << "\n";
        }else{
            cout << 3 << "\n"; // s = 1, w1 = w2 = w3 = 1.
        }
    }
    return 0;
}