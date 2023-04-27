#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int k;
		cin >> k;
		int arr[100],count = 0,i = 0;
		while(i < n)
		{
			cin >> arr[i];
			if((arr[i] + k) % 7 == 0)
			{
				count++;
			}
            i++;
		}	
		
		cout <<""<<count<<endl;
	}
    return 0;
}