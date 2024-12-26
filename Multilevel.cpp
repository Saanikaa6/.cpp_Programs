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

class DerivedX : public Derived
{
    public :
        int a,b;
        DerivedX()
        {
            cout<<"Inside DerivedX Constructor\n";
            a = 50;
            b = 60;
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside DerivedX Sun\n";
        }
};

int main()
{
    DerivedX dobj;  // fkt DerivedX class cha object create kela karan yacha kela ki Base ani Derived cha tyat yenarch mhnun
    //Constructor call kse hotil : Base -> DerivedX -> Derived  
    cout<<"Inside main Function\n";
    cout<<"Size of Base Class\n"<<sizeof(Base)<<"\n";         //8
    cout<<"Size of Derived Class\n"<<sizeof(Derived)<<"\n";   //16
    cout<<"Size of DerivedX Class\n"<<sizeof(DerivedX)<<"\n"; //24

    cout<<dobj.i<<"\n"; //10
    cout<<dobj.j<<"\n"; //20
    cout<<dobj.x<<"\n"; //30
    cout<<dobj.y<<"\n"; //40
    cout<<dobj.a<<"\n"; //50
    cout<<dobj.b<<"\n"; //60

    dobj.Fun();     //Inside Fun of Base 
    dobj.Gun();     //Inside Gun of Derived
    dobj.Sun();     //Inside Sun of DerivedX

    //Destrcutors call kse hotil : DerivedX -> Derived -> Base
    
    return 0;
}

/*
 V.V.IMP NOTE :
 nehemi costructor calling top to bottom hoat 
 destrcutor calling bottom to top hoat
 */

