#include<iostream>
#include<iomanip>
using namespace std;
class sample
{
    int i;
    double d;
    public:sample(int i,double d):i(i),d(d)
    {
        cout<<i<<" "<<d<<endl;
    }
    void print(int i,double d)
    {
        cout<<i<<" "<<d<<endl;
    }
};
int main()
{
    sample s(2,3);
    s.print(5,6);
    return 0;
}
