#include<iostream>
using namespace std;

void addition(int ,int );

void substrac(int x,int y)
{
    int sub=y-x;
    cout<<sub<<endl;
}

int main()
{
    addition(10,20);
    addition(20,30);
    substrac(10,20);
    substrac(20,30);
    return 0;
}

void addition(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}