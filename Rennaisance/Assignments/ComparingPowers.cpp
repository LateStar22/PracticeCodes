#include <iostream>
#include <math.h>
using namespace std;
int main() {
    // your code goes here
	int t;
	cin >> t;
	while(t--)
	{
		long long int a,b,n;
        cin >> a >> b >> n;
        a = abs(a);
        b = abs(b);
		if(pow(a,n) > pow(b,n))
		{
            cout << pow(a,n) << "," << pow(b,n) << " ";
			cout << 1 << endl;
		}else if(pow(a,n) < pow(b,n))
		{
            cout << pow(a,n) << "," << pow(b,n) << " ";
			cout << 2 << endl;			
		}else
		{
            cout << pow(a,n) << "," << pow(b,n) << " ";
			cout << 0 << endl;
		}
	}
    return 0;
}