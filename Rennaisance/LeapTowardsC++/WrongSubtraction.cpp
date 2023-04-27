#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n, k;
    cin >> n >> k;
    int count = 0;
    while(count < k)
    {
        if(n % 10 == 0)
        {
            n = n / 10;
        }else{
            n = n - 1;
        }
        count ++;
    }

    cout << n << endl;
    return 0;
}