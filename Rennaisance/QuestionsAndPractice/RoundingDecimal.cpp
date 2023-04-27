#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    // your code goes here
	float x;
	cin >> x;
	x = x * 1000;
	int count = 0;
	int rem = 0;
	while(count <= 2)
	{
		rem = fmod ( x, 10.0);
		x = x / 10;
		count ++;
	}
	
	if(rem >= 5)
	{
		cout << ceil(x) << endl;
	}else
	{
		cout << floor(x) << endl;
	}
    return 0;
}