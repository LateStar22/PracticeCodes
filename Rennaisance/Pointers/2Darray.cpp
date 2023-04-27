#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int* pointers[3];
    int x[3] = {1,2,3};
    int y[3] = {4,5,6};
    int z[3] = {7,8,9};
    pointers[0] = x; // here, address of first element of every row has been passed to pointer
    pointers[1] = y;
    pointers[2] = z;

    // cout << *pointers[0] <<" "<< *pointers[1] <<" "<< *pointers[2];
    for(int i = 0 ; i < 3 ; i ++)
    {
        for(int j = 0 ; j < 3 ; j ++)
        {
            cout << pointers[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}