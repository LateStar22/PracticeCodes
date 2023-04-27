#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	char c,s;
	cin>>c>>s;
	/*string R="3";
	string B="2";
	string G="1";*/
	
	if((c=='G'&& s=='B') ||(c=='B' && s=='G')){
	    cout<<"B"<<endl;
	}
	else{
	    int z=max(c,s); // ASCII values are taken into consideration:
     	cout<<char(z)<<endl; // ASCII is getting converted into corresponding character:
	}
	
	return 0;
}
