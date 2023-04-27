#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    char word1[100] = "abcd ";
    char word2[100] = "abcd";

    int i  = 0;
    int len1 = 0;
    while(word1[i] != '\0')
    {
        len1 ++;
        i++;
    }

    i  = 0;
    int len2 = 0;
    while(word2[i] != '\0')
    {
        len2 ++;
        i++;
    }

    if ((len1 != len2))
    {
        /* code */
        cout << "NO" << "\n";
    }else{
        int i = 0;
        int flag = 1;
        while(word1[i] != '\0')
        {
            if(word1[i] != word2[i])
            {
                cout << "NO" << "\n";
                flag = 0;
                break;
            }
            i++;
        }

        if(flag == 1)
        {
            cout << "YES" << "\n";
        }
    }
    

    return 0;
}