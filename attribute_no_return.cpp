#include<iostream>
using namespace std;

void prime(int num)
{
    int i,f=0;
    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
        {
            f= 1;
            break;
        }
        else
        {
            f=0;
        }
    }
    if(f==1)
    {
        cout<<num<<" is not prime number"<<endl;
    }
    else
    {
        cout<<num<<" is prime number"<<endl;
    }

}
int main()
{
    int num;
    cin>>num;
    prime(num);
    return 0;
}