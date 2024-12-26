#include<iostream>

using namespace std;

class Marvellous
{
    public:
        int No1;
        int No2;

        Marvellous()  // automatically call hotat constructor ani destructor
        {
            cout<<"Inside default constructor\n";
            No1 = 0;
            No2 = 0;
        }
        Marvellous(int A, int B)  // jeva object create kel jaat teva automatically constructor call hoto
        {
            cout<<"Inside Parameterised Constrcutor\n";
            No1 = A;
            No2 = B;
        }
        ~Marvellous()
        {
            cout<<"Inside Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    Marvellous mobj1();
    Marvellous mobj2(11,21);

    return 0;
}