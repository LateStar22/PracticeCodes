/*Question: Find the sum of all subarrays
Answer: Solving with reverse look up
Idea: Multiplying an element with the number of sunarrays it has fallen in and summing it for all elemnts 
TC: O(n)*/

#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    long long ans = 0; // Initialize the answer variable
    for(int i=0; i<n; i++) {
        ans = (ans%MOD + ((long long)arr[i] * (i+1) * (n-i))%MOD)%MOD;
        // Calculate the contribution of current element to the answer
    }
    cout << ans << endl; // Print the final answer
    return 0;
}