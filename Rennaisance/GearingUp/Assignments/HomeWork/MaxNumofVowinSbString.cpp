#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int t,i;
    cin >> t;
    while(t --)
    {
        string s;
        cin >> s;

        int len = s.length();

        int k;
        cin >> k;

        //Sliding window;
        int count = 0;
        for(i = 0 ; i < k ; i ++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count ++;
            }
        }
		
		int ans = count;
        for(int j = k ; j < len ; j ++)
        {
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                count ++;
            }
            if(s[j - k] == 'a' || s[j - k] == 'e' || s[j - k] == 'i' || s[j - k] == 'o' || s[j - k] == 'u')
            {
                count --;
            }
			ans = max(ans,count);
        }

        cout << ans;
		cout << "\n";

    }

    return 0;
}