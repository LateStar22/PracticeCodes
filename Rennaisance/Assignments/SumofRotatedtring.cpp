#include <iostream>
using namespace std;
int main() {
    // your code goes here
	char a[4];
	cin >> a;
	int x = 0;
	int len = 2;
	int poweroften = 1;
	while(len >= 0)
	{
		x =  x + (a[len] - '0') * poweroften;
		poweroften = poweroften * 10;
		len--;
	}
	int count = 0;
	int i = 0;
	while(count < 2)
	{
		int temp = a[i];
		a[i] = a[i+1];
		a[i+1] = a[i+2];
		a[i+2] = temp;
		poweroften = 1;
		len = 2;
		while(len >= 0)
		{
			x +=  (a[len] - '0') * poweroften;
			poweroften = poweroften * 10;
			len--;
		}
		count++;
		
	}
	
	cout << x << endl;
    return 0;
}