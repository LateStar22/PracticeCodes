#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,m;
    cin >> n >> m;
    int answer[n][m];
    memset(answer,-1,sizeof(answer));
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            cout << answer[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}