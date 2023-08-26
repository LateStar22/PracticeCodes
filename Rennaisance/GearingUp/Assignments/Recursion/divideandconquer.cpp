#include <bits/stdc++.h>
using namespace std;

int findMax(int i,int j,int arr[], int size){
    if(i != j){
        int m = (i + j) / 2;
        int x = findMax(0,m,arr,size / 2);
        int y = findMax(m + 1,j,arr,size / 2);
        return max(x,y);
    }else{
        return arr[i];
    }
}
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int arr[6] = {7,12,5,8,10,11};
    int ans = findMax(0,5,arr,6);
    cout << ans;
    return 0;
}