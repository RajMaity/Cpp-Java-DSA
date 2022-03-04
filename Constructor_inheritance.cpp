#include<iostream>
using namespace std;
class A //Base class
{
public:
    char a='A';
    void show_base(char x)
    {
        cout<<"This is class "<<x<<endl;
    }
    A(){cout<<"This is constructor of class A"<<endl;} //Constructor
    ~A(){cout<<"This is the destructor of class A"<<endl;} //Destructor
};
class B: public A  //Child or derived class
{
public:
    char b='B';
    B(){cout<<"This is constructor of class B"<<endl;} //Constructor
    ~B(){cout<<"This is the destructor of class B"<<endl;} //Destructor
};
int main()
{
    A obj_a;
    B obj_b;
    obj_a.show_base(obj_a.a);
    obj_b.show_base(obj_b.b); //Due to inheritance
    return 0;
}
