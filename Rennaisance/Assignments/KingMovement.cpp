#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t; cin >> t;
	while (t--) {
		int r, c, k; 
        cin >> r >> c >> k;
		int count = 0;
		for (int i = 1; i <= 8; i++){
            if(abs(r - i) <= k)
            {
                count++;
            }
        }
        for(int j = 1 ; j <= 8 ; j ++){
            if(abs(c - j) <= k)
            {
                count++;
            }
        }
		cout << count << endl;
	}




}