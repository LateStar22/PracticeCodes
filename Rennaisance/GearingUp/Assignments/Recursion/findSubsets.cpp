#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > ans;
void helper(vector<int> A, vector<int> temp, int i){
    if(i == A.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(A[i]);
    helper(A,temp,i + 1);
    temp.pop_back();
    helper(A,temp,i + 1);

}
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    vector<int> A = {1,2,3};
    vector<int> temp;
    helper(A,temp,0);
    // sort(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << "\n";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
    }
}