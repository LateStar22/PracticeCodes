#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    char word[100] = "aaaPPLEaniKET";
    int i = 0;
    while(word[i] != '\0')
    {
        if(word[i] > 90)
        {
            word[i] -= 32;
        }
        i++;
    }

    for(int i = 0 ; word[i] != '\0' ; i ++)
    {
        cout << word[i] << " ";
    }

    return 0;
}