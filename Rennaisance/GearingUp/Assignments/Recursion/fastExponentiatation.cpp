#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int exponentiation(int n, int k){
    if(k == 0){
        return 1;
    }
    ans =  n * exponentiation(n, k - 1);
    return ans;
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    cout << exponentiation(10,2);
    return 0;
}