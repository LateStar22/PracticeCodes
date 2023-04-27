#include<iostream>
using namespace std;

void swap(int* first, int* second)
{
    int temp = *first;
    *first = *second;
    *second = *first;
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int a = 1 ,b = 2;
    swap(&a,&b);
    cout << a << b << " ";
    return 0;
}