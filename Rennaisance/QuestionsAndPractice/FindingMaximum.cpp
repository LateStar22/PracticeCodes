#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if(x > y && x > z)
    {
        cout << "x is greatest: "<< x;
    }else if (y > x && y > z)
    {
        cout <<"y is the greatest: " << y;
    }else if(z > x && z > y){
        cout << "Z is greatest: " << z;
    }
    else{
        cout << "All are equal";
    }
    return 0;
}