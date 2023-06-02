#include<iostream>
using namespace std;
int main()
{
    //Bitwise Operator

    int a=4,b=7;

    //& Operator

//     a=0100
//     b=0111
//   res=0100=4

    cout<<"a&b  "<<(a&b) <<endl;

    // | Operator

//     a=0100
//     b=0111
//   res=0111=7
    
    cout<<"a|b  "<<(a|b) <<endl;
    // ~ Operator
//     a=0100
//invert a=1011
//take 2 complement
//       a=0101=-5(n here indicate the MSB(most significant bit) is 1 )
    
    cout<<"~a   "<<(~a)<<endl;
    // ^ Operator
//     a=0100
//     b=0111
//   res=0011=3
    cout<<"a^b  "<<(a^b)<<endl;

    //Left Shift Operator
    // e.g
    // 4<<1
    // 4=0100 => 1000= 8

    cout<<(a<<1)<<endl;

    //Right Shift Operator
    // e.g
    // 4>>1(no of bit shift)
    // 4=0100 => 0010= 2

    cout<<(a>>1)<<endl;
}