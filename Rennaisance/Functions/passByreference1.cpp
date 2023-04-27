#include<iostream>
using namespace std;

int func1(int** y)
{
    **y = 100;
}

void func(int* x)
{
    *x = 6;
    func1(&x);
    
}
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int a = 5;
    func(&a);
    cout << a;
    return 0;
}