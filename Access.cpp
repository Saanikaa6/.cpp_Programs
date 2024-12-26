// ya program mdhye error generate hoat ahe te ka he smjnyasathi ha program ghetla 
/* V.V.IMP : nemehi lkshat thevne ki public che member apan main mdhye pan access kru shkto 
pan private he fkt class mdhyech access kru shkto */

#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
    private:
        int B;
    public:
        Demo()
        {
            A = 11;
            B = 21;
        }
        void Fun()
        {
            cout<<"Value of A : "<<A<<"\n"; //Allowed
            cout<<"Value of B : "<<B<<"\n"; //Allowed
        }
};
int main()
{
    Demo obj;
    obj.Fun();              // Allowed karan Fun navach function he public ahe
    cout<<"Value of A : "<<obj.A<<"\n";     //Allowed
    cout<<"Value of B : "<<obj.B<<"\n";     //Not Allowed  karan B private ahe 

    return 0;
}