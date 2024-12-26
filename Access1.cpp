#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;
            j = -20;
            k = 30;
        }
        void Gun()
        {
            cout<<i<<"\n";  //Allowed karan public ahe
            cout<<j<<"\n";  //Allowed karan swtachya class mdhye ahe private asl tri
            cout<<k<<"\n";  //Allowed karan te pan swatach ahe
        }
};

class Derived  : public Base
{
    public:
        void Fun()
        {
            cout<<i<<"\n";  //Allowed karan public ahe
            cout<<j<<"\n";  // Not Allowed karan private ahe
            cout<<k<<"\n";  //Allowed karan protected ahe mg te immediate dervied class mdhye inherit hoat        
        }
};

int main()
{
    Base bobj;

    cout<<bobj.i<<"\n"; //Allowed karan public ahe
    cout<<bobj.j<<"\n"; //Not Allowed karan private ahe
    cout<<bobj.k<<"\n"; //Not Allowed karan te fkt tyachya derived class lach accessible ahe

    return 0;
}