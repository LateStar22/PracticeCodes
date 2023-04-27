// Program to print Nth fibonacci number;

#include <iostream>
using namespace std;

int apple()
{

}
int main()
{
    int n, prev, curr, sum = 0;
    cin >> n;
    prev = 0;
    curr = 1;
    int temp = 0;
    if (n == 0)
    {
        cout << "0";
        cout << "," << n << "th Fibonacci number is : " << prev;
    }
    else
    {
        cout << prev <<" "<<curr <<" ";
        for (int i = 0; i < n - 2; i++)
        {
            temp = prev + curr;
            cout << temp << " ";
            prev = curr;
            curr = temp;
        }
        cout << "," << n << "th Fibonacci number is : " << curr; // using curr instead of temp, to tackle n = 1 situation
    }

    return 0;
}