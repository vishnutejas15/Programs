#include<iostream>
#include<iomanip>
using namespace std;
class base
{
    public:void f(){cout<<"a";}
};
class derived:public base
{
    void f(){cout<<"b";}
};
int main()
{
    base *d=new derived;
    d->f();
    return 0;
}
