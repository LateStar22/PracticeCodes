#include<iostream>
using namespace std;

struct person{
    char name[50];
    int age;
    char gender;
};

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    struct person p[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> p[i].name >> p[i].age >> p[i].gender;
    }

    //Selection Sort.
    for(int i = 0 ; i < n ; i ++)
    {
        int mini = i;
        for(int j = i + 1 ; j < n ; j ++)
        {
            if(p[mini].age < p[j].age) // descending order
            {
                mini = j;
            }
        }
            struct person temp;
            temp = p[i];
            p[i] = p[mini];
            p[mini] = temp;
    }
    for(int i = 0 ; i < n ; i ++)
    {
        cout << p[i].name << " " << p[i].age << " " << p[i].gender << " * ";
    }


    return 0;
}