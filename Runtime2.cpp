#include<iostream>
using namespace std;

class Base      
{
    public:
        int i,j;
        void Fun()          
        {
            cout<<"Inside Base Fun\n";
        }
        void Gun()
        {
            cout<<"Inside Base Gun\n";
        }
        void Sun()
        {
            cout<<"Inside Base Sun\n";
        }
        void Run()
        {
            cout<<"Inside Base Run\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        void Fun()          
        {
            cout<<"Inside Derived Fun\n";
        }
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }
        void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }
        void Mun()
        {
            cout<<"Inside Derived Mun\n";
        }
};

int main()
{
    Derived dobj;  
    Base *bptr = NULL;  

    bptr = &dobj;       //upcasting karan chota base cha pointer derived chya mhnje mothya obj la point krtoy
    bptr->Fun();    //Base cha Fun
    bptr->Gun();    //Base cha Gun
    bptr->Sun();    //Base cha Sun
    bptr->Run();    //Base cha Run
    // bptr->Mun();    //Derived cha Mun ahe so error denar

    return 0;
}