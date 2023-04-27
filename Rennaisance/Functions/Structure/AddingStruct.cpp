#include<iostream>
using namespace std;

struct ComplexNumber{
    int a =  20;
    int img =  10;
}num1,num2,num3;

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    num3 = {num1.a + num2.img, num2.a + num1.img};
    cout <<  num3.a << " " << num3.img;
    return 0;
}