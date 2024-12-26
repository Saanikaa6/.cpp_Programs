#include<iostream>
using namespace std;

class Base1
{
    public:
        int i,j;
        Base1()
        {
            cout<<"Inside Base1 Constrcutor\n";
            i = 10;
            j = 20;
        }
        ~Base1()
        {
            cout<<"Inside Base1 Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun of Base1\n";
        }
};
class Base2
{
    public:
        int x,y;
    Base2()
    {
        cout<<"Inside Base2 Constrcutor\n";
        x = 30;
        y = 40;
    }
    ~Base2()
    {
        cout<<"Inside Base2 Destrcutor\n";
    }
    void Gun()
    {
        cout<<"Inside Gun of Base2\n";
    }
};
class Derived : public Base2, public Base1
{
    public:
        int a,b;
        Derived()
        {
            cout<<"Inside Derived Constrcutor\n";
            a = 50;
            b = 60;
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Sun of Derived\n";
        }
};

int main()
{
    Derived dobj;

    cout<<"Size of Base1 Class\n"<<sizeof(Base1)<<"\n";         //8
    cout<<"Size of Base2 Class\n"<<sizeof(Base2)<<"\n";         //8
    cout<<"Size of Derived Class\n"<<sizeof(Derived)<<"\n";     //24
    return 0;
}