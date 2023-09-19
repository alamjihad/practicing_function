#include<iostream>
using namespace std;

int prime()
{ 
    int num;
    cin>>num;
    int i;
    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int f;
    f=prime();
    if(f==1)
    {
        cout<<"It is not prime number"<<endl;
    }
    else
    {
        cout<<"It is prime number"<<endl;
    }
    return 0;
}