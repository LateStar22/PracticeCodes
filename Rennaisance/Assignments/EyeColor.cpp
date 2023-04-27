#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a,b; 
    cin>>a;
    cin>>b;
	if(a=='G')
	{
	    if(b=='B')
	    cout<<'B'<<endl;
	    else if(b=='R')
	    cout<<'R'<<endl;
	    else
	     cout<<'G'<<endl;
	    
	}
	else if(a=='B')
	{
	    if(b=='R')
	    cout<<'R'<<endl;
	    else
	    cout<<'B'<<endl;
	    
	}
	else
	{
	   cout<<'R'<<endl; 
	}
	
	return 0;
}
