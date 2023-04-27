#include<iostream>
#include<vector>
using namespace std;

vector <int> missing_repeating_XOR(vector <int> array)
{
    int xor_array_elements = 0;
    int xor_array_n = 0;

    for(int i = 0 ; i < array.size() - 1 ; i ++)
    {
        int xor_array_elements = array[i] ^ array[i + 1];
    }

    for(int i = 1 ; i <= array.size() ; i++)
    {
        int xor_array_elements = xor_array_elements ^ i;
    }


}

int main()
{
    vector <int> array = {3,1,2,5,4,6,7,5};
    missing_repeating_XOR(array);

    return 0;
}