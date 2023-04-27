#include<iostream>
using namespace std;

int func2(int x)
{
    return 9;
}
int func1(int x)
{
    return func2(x) + 5;
}
int func(int x)
{
    return func1(x) + 3;
}
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int a = func(11);
    cout << a << " ";
    return 0;
}