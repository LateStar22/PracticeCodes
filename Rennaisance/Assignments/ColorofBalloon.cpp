#include <iostream>
#include<string>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	    string s;
	    cin >> s;
		int counta = 0 , countb = 0;


			    
	    for ( int i=0 ; i<s.length() ; i++ )
	    {
	        if( s[i] == 'b' )
	        {
	            countb++;
	        }


			else if( s[i] == 'a' )
	        {
	            counta++;
	        }

	    }
	    
	    
	    if ( counta == s.length() || countb == s.length()  ) 
	    {
	        cout << 0 << endl;
	    }

		else
		{
			cout << min(counta,countb) << endl;
		}

	}
	return 0;
}
