#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    // char names[5][100] = {{'m','i','k','e'},"John","Ravi","Aniket","Anita"};
    // cout << names[0][3] <<" "<< names[4][2] <<" "<< names[3][4] << " ";
    // for(int i = 0 ; i < 5 ; i ++)
    // {
    //     cout << names[i] << " ";
    // }

    // takeing input from user :
    char names[5][100];
    for(int i = 0 ; i < 5 ; i ++)
    {
        cin >> names[i];
    }
    for(int i = 0 ; i < 5 ; i ++)
    {
        cout << names[i] << "\n";
    }

    return 0;
}