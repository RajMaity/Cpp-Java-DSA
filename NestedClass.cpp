//Nested class example code in C++
#include<iostream>
using namespace std;
class Outer
{
private:
    int a;
public:
    void outer()
    {
        cout<<"This is outer class function"<<endl;
    }
    class Inner
    {
        int b;
    public:
        void inner()
        {
            cout<<"This is inner class function"<<endl;
        }
    };
};
int main()
{
    Outer obj_out;
    Outer :: Inner obj_in;
    obj_out.outer();
    obj_in.inner();
    return 0;
}
