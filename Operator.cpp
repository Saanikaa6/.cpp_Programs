#include<iostream>
using namespace std;

class Demo 
{
    public:
        int No1, No2;

        Demo(int A, int B)
        {
            No1 = A;
            No2 = B;
        }
};

Demo operator +(Demo oprnd1,  Demo oprnd2)
{
    return Demo(oprnd1.No1+oprnd2.No1, oprnd1.No2+oprnd2.No2);
}
int main()
{
    Demo obj1(10,20);
    Demo obj2(30,30);

    Demo obj3(0,0);
    obj3 = obj1 + obj2;     // +(obj1,obj2);

    cout<<obj3.No1<<"\t"<<obj3.No2<<"\n";

    return 0;
}