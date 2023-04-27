#include<iostream>
using namespace std;

int* giveFirstFiveElements(int p[], int n)
{ 
    for(int i = 0 ; i <  n ; i ++)
    {
        p[i] = p[i] + 1;
    }
    
    return p;
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int a[5] = {1,2,3,4,5};
    int *q;
    q = giveFirstFiveElements(a,5);
    for(int i  = 0 ; i <  5 ; i ++)
    {
        cout << *(q + i) << " ";
    }

    return 0;
}