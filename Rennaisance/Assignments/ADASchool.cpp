#include <iostream>
using namespace std;
	bool solve(int n, int m)
	{
	    return n % 2 == 0 || m % 2 == 0;
	}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    cout << solve(n,m) ? "YES":"NO";
	}
	return 0;
}
