/*
can be ddone by aplpying binary search
binary search is done to put partition.
*/

#include<iostream>

using namespace std;

bool isPossiible(int arr[],int size,int k,int mid)
{
    int step = 1;
    int paintersCount = 1;
    int boardSum = 0;

    for(int i = 0 ; i < size ; i++)
    {
        cout << step++ << " number of iteration\n";
        if(boardSum + arr[i] <= mid)
        {
            boardSum = boardSum + arr[i];
            cout <<" boardSum in above if :" <<boardSum << endl;
        }
        else
        {
            paintersCount ++;
            if(paintersCount > k || arr[i] > mid)
            {
                cout << "returning false\n";
                return false;
            }

            boardSum =  arr[i];
            cout << "board sum for second painter is : " << boardSum << endl;
        }
        cout << " painters count "<<paintersCount << endl;

    }
    cout << mid << " is right solution,returning true\n";
    return true;
}

int main()
{

    int b[100],size,start,end,i,mid,k,ans = -1,max = 0;

    cout << "Enter the size of array\n";
    cin >> size;

    cout << "Enter the values in array\n";

    for(i = 0 ; i < size ; i++)
    {
        cin >> b[i];
    }

    for(i = 0 ; i < size ; i++)
    {
        max = max + b[i];
    }

    cout << "Enter the number of painters\n";
    cin >> k;

    start = 0;
    end = max;

    cout << "Start is : " << start << endl;
    cout << "End is max and max is : " << max << endl;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(isPossiible(b,size,k,mid))
        {
            ans = mid;
            end = mid - 1;
            cout << "start is :" << start << endl;
            cout << "end is : " << end << endl;
            cout << "Mid = " << mid <<endl;
        }
        else{
            start = mid + 1;
            cout << "start is :" << start << endl;
            cout << "end is : " << end << endl;
            cout << "Mid : " << mid <<endl;
        }   
    }

    cout << "answer is : " << ans;
    return 0;
}