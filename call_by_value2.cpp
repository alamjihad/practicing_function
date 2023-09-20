#include<iostream>
using namespace std;
void ans(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=50,b=30;
    ans(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}