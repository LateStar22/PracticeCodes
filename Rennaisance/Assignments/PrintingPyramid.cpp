#include<iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    
    // for(int i = 1 ; i <= n ; i++)
    // {
    //     for(int j = 1 ; j <= n ; j++)
    //     {
    //         if(j <= (n - i))
    //         {
    //             cout << " ";
    //         }
    //         else{
    //             cout << "* ";
    //         }
            
    //     }
    //     cout << "\n";
    // }

    // int n,i;
    // cin >> n;
    // i = 1;
    // while(i <= n)
    // {
    //     int j = 1;
    //     while(j <= n)
    //     {
    //         if(j <= (n - i))
    //         {
    //             cout << " ";
    //         }else
    //         {
    //             cout << "* ";
    //         }
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }


    int n,i;
    cin >> n;
    i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= (n - i))
        {
            cout << " ";
            j++;
        }
        j = 1;
        while(j <= i)
        {
            cout <<"* ";
            j++;
        }
        cout << "\n";
        i++;
    }
}