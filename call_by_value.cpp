#include<iostream>
using namespace std;
//void change(int x,int y)
int change(int x,int y)
{
    x=20;
    y=10;
}

int main()
{
    int a=10,b=20;
    change(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}