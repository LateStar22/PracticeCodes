#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int stalls[], int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=1; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            cout << "Cow countt : "<<cowCount <<endl;
            if(cowCount==k)
            {
                cout << cowCount <<" cow can be placed at this mid: " <<mid <<endl;
                return true;
            }
            lastPos = stalls[i];
            cout << "last Position is : "<< lastPos << endl;
            
        }
    }
    return false;
}

int main()
{
    int stalls[100],k,i,len;
    cout << "Enter the len of an array\n";
    cin >> len;
    cout << "Enter the elements in array\n";
    for(i = 0 ; i < len ; i++)
    {
        cin >> stalls[i];
    }
    cout << "Enter the number of coows\n";
    cin >> k;
    //int len = sizeof(stalls)/sizeof(stalls[0]);
    sort(stalls, stalls + len);
   	int s = 0;
    int e = stalls[len-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    cout << "start is : " << s <<endl;
    cout << "end is : " << e << endl;
    cout << "mid is : " << mid << endl;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, len)) {
            ans = mid;
            s = mid + 1;
            cout << "start is : " << s << endl;
            cout << "end is : " << e << endl;
        }
        else
        {
            e = mid - 1;
            cout << "start is : " << s << endl;
            cout << "end is : " << e << endl;

        }
        mid = s + (e-s)/2;
        cout << "mid is : " << mid << endl;
    }
    cout << ans;
}