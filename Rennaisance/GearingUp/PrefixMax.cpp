//PrefixMax: creating new prefixmax array to store max values:
#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }


    int idx;
    cout << "Enter the index upto which Max to be found: ";
    cin >> idx;
    int postfixSum[idx + 1];

    postfixSum[0] = a[0];
    for(int i = 1 ; i <= idx ; i ++)
    {
        postfixSum[i] = max(postfixSum[i - 1], a[i]);
    }

    cout << "PreFixMax array: " << " \n";
    for(int i = 0 ; i <= idx ; i ++)
    {
        cout << postfixSum[i] << " ";
    }


    return 0;
}