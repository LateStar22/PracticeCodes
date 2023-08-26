#include <bits/stdc++.h>
using namespace std;


string superDigit(string n, int k){
    long long int sum = 0;
    if(n.length() == 1)
    {
        return n;
    }
    for(char ch : n)
    {
        sum += ch - '0';
    }
    sum = sum * k;
    return superDigit(to_string(sum),1);
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    cout << superDigit("9875",4);
    return 0;
}