#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n,m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0 ; i < n ; i ++)
	{
		for(int j = 0 ; j < m ; j ++)
		{
			cin >> a[i][j];
		}
	}
	
	int upperSum = 0;
	for(int i = 0 ; i < n ; i ++)
	{
		for(int j = i + 1 ; j < m ; j++)
		{
			upperSum += a[i][j];
		}
	}
	
	int lowerSum = 0;
	for(int i = 1 ; i < n ; i ++)
	{
		for(int j = 0 ; j < i ; j++)
		{
			lowerSum += a[i][j];
		}
	}
	
	cout << upperSum << "\n";
	cout << lowerSum << "\n";
	
    return 0;
}