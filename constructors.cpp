#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo()              //default constructor
        {
            A = 0;              //we can initialize with any value
            B = 0;
        }
        Demo(int i,int j)       //parameterised constructor
        {
            A = i;
            B = j;
        }
        Demo(Demo &ref)         //copy constructor
        {
            A = ref.A;
            B = ref.B;
        }
        ~Demo()                 //destructor
        {
            cout<<"Inside Destructor \n";
        }
};

int main()
{
    Demo obj1(11,21); //sglyat adhi main mdhye alyavr control ya line vrun 14th line la jail
    Demo obj2(obj1);    //control ya line vrun 19th line la jail.. he siranni eg dilel aai chya blouse ch ki obj1 he jun blouse ahejyacha reference gheun obj2 mhnje navin blouse tayar kela jail

    cout<<obj1.A<<"\t"<<obj1.B<<"\n";
    cout<<obj2.A<<"\t"<<obj2.B<<"\n";

    return 0;
}