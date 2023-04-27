#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i;
    cin >> n1 >> n2;

    int minimum = min(n1,n2);
    i = minimum;

    while(i >= 1) // running it from minimum to 1
    {
        if((n1 % i == 0) && (n2 % i == 0))
        {
            cout << i << " ";
            break;
        }
        i--;
    }
    
    return 0;
}