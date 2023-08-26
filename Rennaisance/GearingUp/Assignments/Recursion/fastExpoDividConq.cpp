#include <bits/stdc++.h>
using namespace std;

long long int fastExponent(int n, int k){
    
    if(k == 0){
        return 1;
    }
    int x = fastExponent(n, k / 2);
    if(k % 2 != 0){ 
        return x * x * n;
    }else{
        return x * x;
    }
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    cout << fastExponent(5,9);
    return 0;
}