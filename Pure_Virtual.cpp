#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        //1000
        int Addition(int No1, int No2)      //concrete method
        {
            return No1 + No2;
        }

        virtual int Substraction(int No1, int No2) = 0;     //abstract method
};

class Derived : public Base 
{
    public:
        int X,Y;

        //2000
        int Multiplication(int No1, int No2)        //concrete method
        {
            return No1 * No2;
        }
        //3000
        int Substraction(int No1, int No2)      //concrete method
        {
            return No1 - No2;
        }
};

int main()
{
    //Base bobj;        not allowed
    Derived dobj;

    cout<<"Additon is : "<<dobj.Addition(11,10)<<"\n";
    cout<<"Substraction is : "<<dobj.Substraction(11,10)<<"\n";
    cout<<"Multiplicaton is : "<<dobj.Multiplication(11,10)<<"\n";

    cout<<"Size of Base class : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class : "<<sizeof(Derived)<<"\n";

    return 0;
}