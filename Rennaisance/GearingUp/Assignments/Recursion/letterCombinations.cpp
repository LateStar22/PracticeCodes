#include <bits/stdc++.h>
using namespace std;

void printAllCombs(string temp,string& digits,int i,vector<vector<char>>& digitmap){
    
    if(i == digits.length())
    {   
        cout << "@ ";
        cout << temp << " ";
        return;
    }
    for(int j = 0 ; j < digitmap[digits[i] - '2'].size() ; j ++)
    {
        cout << "# ";
        printAllCombs(temp + digitmap[digits[i] - '2'][j],digits,i + 1,digitmap);
    }

}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    string temp = "";
    string digits = "23";
    vector<vector<char>> digitmap(8);
    digitmap[0] = {'a','b','c'};
    digitmap[1] = {'d','e','f'};
    digitmap[2] = {'g','h','i'};
    digitmap[3] = {'j','k','l'};
    digitmap[4] = {'m','n','o'};
    digitmap[5] = {'p','q','r','s'};
    digitmap[6] = {'t','u','v'};
    digitmap[7] = {'w','x','y','z'};
    printAllCombs(temp,digits,0,digitmap);
    return 0;
}