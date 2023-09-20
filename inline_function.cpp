#include<iostream>
using namespace std;
class Human
{
    public:
    inline void Test();
};
inline void Human::Test()
{
    cout<<"Test inline function"<<endl;
}
int main()
{
    Human IAm;
    IAm.Test();
}