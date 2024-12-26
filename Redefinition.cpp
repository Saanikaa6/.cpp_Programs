#include<iostream>
using namespace std;

class Base      
{
    public:
        void Fun()          //Definition
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        void Fun()          //Redefinition
        {
            cout<<"Inside Derived Fun\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";   //size of empty class object in c++ is always 1

    Base bobj;
    bobj.Fun();
    
    Derived dobj;
    dobj.Fun();

    return 0;
}