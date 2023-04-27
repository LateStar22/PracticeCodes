/*Time Complexity: O(NlogN)

Space Complexity: O(N)*/


#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

vector<int> pairsearch(vector<int>& nums, int target)
{
    vector<int> res,store;

    store = nums; // copying one vector into other

    cout << "Store is :" << endl;

    for(int i = 0 ; i < store.size() ; i ++)
    {
        cout <<store[i] << " ";
    }

    cout << "\n";
    
    sort(store.begin(),store.end());

    cout << "Store after sorting is : " << endl;

    for(int i = 0 ; i < store.size() ; i ++)
    {
        cout <<store[i] << " ";
    }


    int left = 0, right = store.size() - 1;
    int n1, n2;

    while(left < right)
    {
        if(store[left] + store[right] == target)
        {
            n1 = store[left];
            n2 = store[right];
            break;
        }

        else if(store[left] + store[right] > target)
        {
            right --;
        }
        else{
            left ++;
        }
    }
    for(int i = 0 ; i < nums.size() ; i ++)
    {
        if(n1 == nums[i])
        {
            res.emplace_back(i);
        }
        else if(n2 == nums[i])
        {
            res.emplace_back(i);
        }    
    }

    if(res.size() == 2)
    {
        return res;
    }
    else{
        cout << "-1";
    }
}

int main()
{
    vector<int> nums = {11,9,6,3,15};
    int target = 100;
    vector<int> ans;
    ans = pairsearch(nums,target);
    for(int i = 0 ; i < ans.size() ; i ++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}