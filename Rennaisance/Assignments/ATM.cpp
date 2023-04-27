#include <iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main() {
    // your code goes here
	int x;
	float y;
	float left;
	cin >> x >> y;
	
	if((x % 5 == 0) && ((y - x) >= 0.50))
	{
		left = ((y - x) - 0.50);
		fprintf(stdout, "%.2f",left);
	}
    else{
        fprintf(stdout, "%.2f",y);
    }
    return 0;
}