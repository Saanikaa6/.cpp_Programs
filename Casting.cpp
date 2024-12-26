#include<iostream>
using namespace std;

class Base      
{
    public:
        int i,j;
        void Fun()          //Definition
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        void Fun()          //Redefinition
        {
            cout<<"Inside Derived Fun\n";
        }
};

int main()
{
    Base bobj;      //8 byte
    Derived dobj;   //16 byte

    Base *bptr = NULL;  //8 byte
    Derived *dptr = NULL;   //8 byte

    bptr = &bobj;       //nocasting
    dptr = &dobj;       //nocasting 
    bptr = &dobj;       //upcasting karan chota base cha pointer derived chya mhnje mothya obj la point krtoy
    dptr = &bobj;       //downcasting karan mothya derived cha pointer points to chota base cha object
    
    return 0;
}