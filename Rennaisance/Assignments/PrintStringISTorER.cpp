#include<iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    char s1[21];
    char s2[4];
    cout << "Enter s1 : ";
    cin >> s1;
    cout << "Enter s2 : ";
    cin >> s2;

    int i = 0;
    int len1 = 0;
    while(s1[i] != '\0')
    {
        len1++;
        i++;
    }

    int len2 = 0;
    i = 0;
    while (s2[i] != '\0')
    {
        len2++;
        i++;
    }
    cout << "len1 : " << len1 << "\n";
    cout << "len2 : " << len2 << "\n";

    cout << "value of 1 is Len1 - Len2 : " << len1 - len2 << "\n";

    i = len1 - len2;
    int count = 0;
    int j = 0;
    while(s1[i] != '\0')
    {
        if(s1[i] == s2[j])
        {
            count++;  
        }
        i++;
        j++;
    }

    cout << "Value of count : " << count << " ";

    if(count == 3)
    {
        cout << "ist" << endl;
    }else{
        cout << "er";
    }
    
    return 0;
}