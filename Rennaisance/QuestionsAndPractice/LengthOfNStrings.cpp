#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.n
    int n;
    cin >> n;
    char str[n][100];

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> str[i];
    }

    for(int i = 0 ; i < n ; i ++)
    {
        int len = 0;
        int j = 0;
        while(str[i][j] != '\0')
        {
            len++;
            j++;
        }
        cout << "Length of "<< i + 1 << " stirng is : " << len << " "; 
    }
    return 0;
}