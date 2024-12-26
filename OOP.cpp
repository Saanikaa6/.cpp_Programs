#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;

        Arithmetic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

        int Substraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans ;
        }
};

int main()
{
    int Value1 = 0, Value2 = 0, Retrn = 0;

    cout<<"Enter first no : \n ";
    cin>>Value1;

    cout<<"Enter second no : \n";
    cin>>Value2; 
    
    Arithmetic obj(Value1,Value2);

    Retrn = obj.Addition();
    cout<<"Addition is :"<<Retrn<<"\n";

    Retrn = obj.Substraction();
    cout<<"Substracticon is :"<<Retrn<<"\n";

    return 0;
}