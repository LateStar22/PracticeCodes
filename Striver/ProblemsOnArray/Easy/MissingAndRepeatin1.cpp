/* 
Now, if we subtract the sum of all elements of array from sum of all elements from 1 to N, that should give us the value for (X – Y).

Therefore,

(X-Y) = s – s1 = s’

Similarily,

X^2 – Y^2 = P – P1 = P’

or, (X + Y)(X – Y) = P’

or, (X + Y)*s’ = P’

or, X + Y = P’/s’

Great,

we have the two equations we needed:

(X – Y) = s’

(X + Y) = P’/s’

We can use the two equations to solve and find values for X and Y respectively*/

#include<iostream>
#include<vector>
using namespace std;

vector <int> find_missing_repeating(vector <int> arr)
{
    int n = arr.size(),i;
    long long int S = (n * (n + 1) ) / 2;
    long long int P = (n * (n + 1) * (2 * n + 1) ) / 6;
    long long int missingnumber = 0 , repeating = 0;

    for(i = 0 ; i < arr.size() ; i ++)
    {
        S -= arr[i];
        P -= arr[i] * arr[i];
    }

    missingnumber = (S + P/S) /2;
    repeating = missingnumber - S;

    vector <int> ans;

    ans.push_back(missingnumber);
    ans.push_back(repeating);
    
    return ans;


}

int main()
{
    vector <int> array = {3,1,2,5,4,6,7,5};
    vector <int> ans = find_missing_repeating(array);
    for(int i : ans)
    {
        cout << i << " ";
    }

    return 0;

}