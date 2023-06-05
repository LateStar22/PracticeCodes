// TC : O(N*SQRT(N))
//gave TLE for many cases.


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int i = 1;
		int count = 0;
		while(i <= n)
		{
			int flag = 1;
			for(int j = 2 ; j <= sqrt(i) ; j ++)
			{
				if(i % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if(flag == 1 && i != 1)
			{
				count ++;
			}
			i++;
		}
		cout << count;
		cout << "\n";
	}
}