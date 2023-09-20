#include<iostream>
using namespace std;
void change(int *x,int *y)
//int change(int *x,int *y)
{
    *x=10;
    *y=20;
}
int main()
{
    int a=20,b=10;
    change(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
}