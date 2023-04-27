#include <iostream>
using namespace std;

int primeChef(int arr)
{
    int ans = 0;
	while(arr > 0)
	{
		arr = arr / 10;
        ans = ans + 1;
	}
    return ans;
}

int main() {
    // your code goes here
    int n,i = 1,ans = 0;
    cin >> n;
    int arr[100];
    while(i <= n)
    {
        cin >> arr[i];
        ans = ans + primeChef(arr[i]);
        i++;
    }
    cout << ans;

    i = 2;
    int flag = 0;
    while(i < ans)
    {
        if(ans % i == 0)
        {
            cout << "\nNo";
            flag = 1;
            break;
        }
          i++;
    }

    if(flag == 0)
    {
        cout << "\nYes";
    }
    return 0;
}