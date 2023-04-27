#include<iostream>
using namespace std;

struct personEducation{
    char degree[50];
    char College[50];
    char place[50];
};

struct human {
    char name[50];
    int age;
    char gender;
    struct personEducation edu;
};


int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    struct personEducation edu = {"BE", "GHRAET", "nagpur"};
    struct human h = {"Aniket", 24,'M',edu};

    cout << h.edu.degree;

    return 0;
}