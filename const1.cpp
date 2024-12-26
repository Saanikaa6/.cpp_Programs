#include<iostream>
using namespace std;

int main()
{
    int No1 = 10;

    const int No2 = 10;

    No1++;      //allowed
    No2++;      //not allowed

    No1 = 21;   //allowed
    No2 = 21;   //not allowed which is a re-initialization

    return 0;
}