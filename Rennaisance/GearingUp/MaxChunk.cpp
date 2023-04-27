#include <iostream>
using namespace std;
bool chunk(int i, int j, int a[],int n)
{
    int count  = 0;
    for(int k = i ; k <= j ; k++)
    {
        if((i <= a[k]) && (a[k] <=  j))
        {
            count++;
        }
    } 
    if(count == (j - i + 1))
    {
        return true;
    }else{
        return false;
    }
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];
    for(int i  = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    int i = 0,ans = 0;
    while(i < n){
        
        int j;
        for(j = i ; j < n ; j ++)
        {
            if(chunk(i,j,a,n))
            {
                break;
            }
        }
        i = j + 1;
        ans ++;
    }

    cout << "Final answer: " << ans;
    return 0;
}