#include<iostream>
using namespace std;

int main()
{
    int i = 1,k,sum = 0;
    cin >> k;
    while( i <= k) // finding number of elements left behind;
    {
        sum = sum + (k - i);
        i++;
    }

    int grpSum = 0, curr = 1; //sum of elemnts left.
    for (int i = 0; i < sum; i++) {
        grpSum = grpSum + curr;
        curr += 2;
    }
    
    int lastLeftElement = curr - 2;
   
    int sum1 = 0;
    int firstElementOfGroup = lastLeftElement + 2; //sum of elemnts in group.
    for (int i = 0; i < k; i++) {
        sum1 = sum1 + firstElementOfGroup;
        firstElementOfGroup = firstElementOfGroup + 2;
    }
    

    cout << sum1;


}