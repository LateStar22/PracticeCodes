#include <iostream>
using namespace std;
int main() {
    // your code goes here
	
	int t;
	cin >> t;
	int i = 1;
	while(i <= t)
	{
		int n;
		cin >> n;
		int l = 1,c = 0,d = 0;
		while(d <= n)
		{
			d = d + l;
            l = l + 9;
            cout << "Dist Covered: " << d << " ";
            cout << ",Next Leap: " << l << " ";
			c++;
            cout <<"Count: " <<c << " ";
		}
		cout <<"Case #" << i << ":" <<c << endl;
		i++;
		
	}
    return 0;
}