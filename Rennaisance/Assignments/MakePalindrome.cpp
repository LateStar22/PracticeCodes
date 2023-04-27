#include <iostream>
using namespace std;
int main() {
    // your code goes here
	char a[101];
	cin >> a;
	
	int len = 0;
	while(a[len] != '\0')
	{
		len++;
	}
	
	int i = 0,count = 0;
	int j = len - 1;
	while(i < j)
	{
		if(a[i] != a[j])
		{
			count++;
		}
		i++;
		j--;
	}
	
	cout << count << endl;
    return 0;
}