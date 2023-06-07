#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double num){ // TC : O(1)
    
    long double sqr = sqrt(num);
    return((sqr - floor(sqr)) == 0);
}

bool isProduct(int num){

    int cnt = 0;
    for(int i = 2 ; cnt < 2 && i <= sqrt(num) ; i ++)
    {
        while(num % i == 0)
        {
            num /= i;
            cnt++;
        }
    }

    if(num > 1)
    {
        cnt++;
    }

    return cnt == 2;
}

void findNumbers(int num)
{

    int ans = 0;
    for(int i = 1 ; i <= num ; i ++)
    {
        if(isProduct(i) && !isPerfectSquare(i))
        {
            ans++;
        }
    }
    cout << ans << " ";
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int num;
    cin >> num;
    findNumbers(num);
    return 0;
}