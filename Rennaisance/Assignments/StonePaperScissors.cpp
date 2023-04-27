#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long r1, p1, s1, r2, p2, s2;
		cin >> r1>> p1>> s1>> r2>> p2>> s2;
		
		int jonWins = min(r1, s2) + min(p1, r2) + min(s1, p2);
		if(jonWins > ceil(n/2.0)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
}