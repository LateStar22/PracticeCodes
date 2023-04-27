#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter the marks of students\n";
    cin >> marks;

    if(marks >= 70)
    {
        cout << "Grade A";
    }else if (marks >= 40)
    {
        cout << "Grade B";
    }else if(marks >= 20)
    {
        cout << "Grade C";
    }else{
        cout << "Grade D";
    }

    return 0;
}