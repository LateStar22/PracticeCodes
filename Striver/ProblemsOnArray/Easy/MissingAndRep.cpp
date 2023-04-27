#include<iostream>
#include<vector>
using namespace std;

vector <int> find_missing_repeating(vector <int> arr)
{   
    int n = arr.size() + 1;
    vector <int> substitution(n,0);

    vector <int> ans;

    for(int i = 0 ; i < arr.size() ; i ++)
    {
        substitution[arr[i]]++;
    }

    for(int i = 1 ; i <= n ; i++)
    {
        if(substitution[i] == 0 || substitution[i] > 1)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

int main()
{
    vector <int> array = {3,1,2,5,3};
    vector <int> ans = find_missing_repeating(array); //passing is just same as that of vector

    for(int i : ans)
    {
        cout << i << " ";
    }
}
