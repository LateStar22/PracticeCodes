#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int a1,a2,a3,b1,b2,b3;
	int a = 0, b = 0;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	
	if(a1 > b1)
	{
		a++;
	}else if(b1 > a1)
	{
		b++;
	}
	
	if(a2 > b2)
	{
		a++;
	}else if (b2 > a2)
	{
		b++;
	}
	
	if(a3 > b3)
	{
		a++;
	}else if(b3 > a3)
	{
		b++;
	}
	
	cout << a <<" "<< b;
	
    return 0;
}