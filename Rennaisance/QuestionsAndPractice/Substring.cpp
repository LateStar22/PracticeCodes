#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    char s1[100] = "abcdefghijklmn";
    char s2[100] = "fgh";

    int i = 0 ;
    int len1 = 0;
    while(s1[i] != '\0')
    {
        i++;
        len1++;
    }

    i = 0;
    int len2 = 0;
    while(s2[i] != '\0')
    {
        i++;
        len2++;
    }

    int match = 0;
    for(int i = 0 ; i <= len1 - len2 ; i ++)
    {
        match = 1;
        for(int j = i ; j < (i + len2 - 1) ; j ++)
        {
            if(s1[j] != s2[j - i])
            {
                match = 0;
                break;
            }
        }
        if(match == 1)
        {
            break;
        }
    }
    if(match == 1)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}