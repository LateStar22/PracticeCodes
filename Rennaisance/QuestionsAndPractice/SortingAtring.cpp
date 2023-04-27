#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    char word[100] = "zxy";
    int i = 0;
    int len = 0;
    while(word[i] != '\0')
    {
        len ++;
        i ++;
    }

    cout << "Length of string : " << len << "\n";

    // applying selection sort.
    for(int i = 0 ; i < len - 1; i ++)
    {
        int mini = i;
        for(int j = i + 1 ; j < len ; j ++)
        {
            if(word[mini] > word[j]) // ascending
            {
                mini = j;
            }
        }
        char temp = word[mini];
        word[mini] = word[i];
        word[i] = temp;
    }

    for(int i = 0 ; i < len ; i ++)
    {
        cout << word[i] << " ";
    }
    return 0;
}