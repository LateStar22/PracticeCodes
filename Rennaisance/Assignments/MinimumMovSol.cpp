#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    int mini = a[0];
    for(int i = 0 ; i < n ; i ++)
    {
        mini =  min(mini, a[i]);
    }

    int miniMoves = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        miniMoves += (a[i] - mini);
    }
    cout << miniMoves << "\n";
    return 0;
}