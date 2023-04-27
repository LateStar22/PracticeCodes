#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int p,d,m,s,n = 0, count = 0, sum = 0,left = 0;
	
	cin >> p >> d >> m >> s;
	
	while((p - (n * d)) >= m)
	{
		sum = sum + (p - (n * d));
        if(sum <= s)
        {
            count++;
        }  
		n++;
	}
	
	if(sum < s)
	{
		left = s - sum;
		while(left >= m)
		{
			count++;
			left = left - m;
		}
		cout << count;
	}
	else
	{
		cout << count;
	}
	
    return 0;
}