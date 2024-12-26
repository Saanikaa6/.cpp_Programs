#include<iostream>
using namespace std;    //pre-defined namespace

namespace Marvellous    //user-defined namespace
{
    class Demo
    {
        public:
        void Display()
        {
            cout<<"Inside Display Method\n";
        }
    };
}


int main()
{
    Marvellous::Demo obj;
    obj.Display();

    return 0;
}