#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if(y > x && y > z)
    {
        cout << "Y is the largest: " << y;
        if(x > z)
        {
            cout << " Second largest is X: " << x;
        }
            cout << " Third largest is Z: " << z;
        
    }else if(x > y && x > z)
    {
        cout << "X is the largest: " << x;
        if(y > z)
        {
            cout << " Second largest is Y: " << y;
        }
            cout << " Third largest is Z: " << z;
        
        
    }else if(z > y && z > x)
    {
        cout << "z is the largest: " << z;
         if(y > x)
        {
            cout << " Second largest is Y: " << y;
        }
        cout << " Third  largest is X: " << x;
    
        
    }else{
        cout << "All over are equal"; 
    }

    return 0;
}