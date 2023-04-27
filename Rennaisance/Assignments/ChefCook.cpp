#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
	{
		int j = 1,sum = 0;;
		while(j <= 5)
		{
			int q = 0;
			cin >> q;
            sum = sum + q;
			j++;
		}
        if(sum == 0)
        {
            cout << "Beginner" <<"\n";
        }else if(sum == 1)
        {
            cout << "Junior Developer" << "\n";
        }else if(sum == 2)
        {
            cout << "Middle Developer" << "\n";
        }else if(sum == 3)
        {
            cout << "Senior Developer" << "\n";
        }else if(sum == 4){
            cout << "hacker" << "\n";
        }else{
            cout << "Jeff Dean" << "\n";
        }
	}
    return 0;
}