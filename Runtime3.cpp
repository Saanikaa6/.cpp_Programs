#include<iostream>
using namespace std;

class Base      
{
    public:
        int i,j;
        virtual void Fun()          //1000     
        {
            cout<<"Inside Base Fun\n";
        }
        void Gun()                  //2000
        {
            cout<<"Inside Base Gun\n";
        }
        virtual void Sun()          //3000
        {
            cout<<"Inside Base Sun\n";
        }
        virtual void Run()          //4000
        {
            cout<<"Inside Base Run\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        virtual void Fun()          //5000 
        {
            cout<<"Inside Derived Fun\n";
        }
        void Gun()                  //6000
        {
            cout<<"Inside Derived Gun\n";
        }
        virtual void Mun()          //7000
        {
            cout<<"Inside Derived Mun\n";
        }
        void Run()          //8000
        {
            cout<<"Inside Derived Run\n";
        }
};

int main()
{
    cout<<"Size of base class : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class : "<<sizeof(Derived)<<"\n";

    Derived dobj;  
    Base *bptr = NULL;  

    bptr = &dobj;       //upcasting karan chota base cha pointer derived chya mhnje mothya obj la point krtoy
    bptr->Fun();    //Derived cha Fun
    bptr->Gun();    //Base cha Gun
    bptr->Sun();    //Base cha Sun
    bptr->Run();    //Base cha Run
    // bptr->Mun();    //Derived cha Mun ahe so error denar

    return 0;
}