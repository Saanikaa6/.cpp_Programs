#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;    //size : 8 

        Base()
        {
            cout<<"Inside Base Constructor\n";
            i = 10;
            j = 20;
        }
        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;       // size : 16, karan base + derived

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x = 30;
            y = 40;
        }

        ~Derived()
        {
            cout<<"Inside Derived Desrtuctor\n";
        }
        void Gun()
        {
            "Inside Derived Gun\n";
        }
};


int main()
{
    Derived dobj;  // fkt derived class cha object create kela karan yacha kela ki base cha tyat yenarch mhnun
    
    cout<<"Inside main Function\n";

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.Fun();
    dobj.Gun();
    
    return 0;
}

/*
 V.V.IMP NOTE :
 nehemi costructor calling top to bottom hoat 
 destrcutor calling bottom to top hoat
 */