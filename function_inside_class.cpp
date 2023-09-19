#include<iostream>
using namespace std;

class Student
{
    public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<" "<< gpa<<endl;
    }
};
int main()
{
    Student Alim,Samim;
    Alim.id=4894;
    Alim.gpa=4.50;
    Alim.display();
    Samim.id=4857;
    Samim.gpa=4.55;
    Samim.display();
    return 0;
}