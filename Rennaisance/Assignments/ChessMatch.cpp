#include<iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,b;
	    cin >> n >> a >> b;
	    int ans =  6 * 60 + n * 2 - (a + b);
	    cout << ans << endl;
	}
	return 0;
}
