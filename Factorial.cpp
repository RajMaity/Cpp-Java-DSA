//Factorial program in C++
//Implementation of OOPS
#include<iostream>
using namespace std;
class Factorial
{
private:
    int n;
public:
    void get_data()
    {
        cout<<"enter the number:"<<endl;
        cin>>n;
    }
    void ans()
    {
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        cout<<fact<<endl;
    }
};
int main()
{
    Factorial obj;
    obj.get_data();
    obj.ans();
    return 0;
}
