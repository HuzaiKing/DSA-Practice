#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    
    //fibonacci Series
    // int a=0,b=1;
    // cout<<a<<" ";
    // for(int i=1;i<=no-1;i++)
    // {
    //     int temp=a+b;
    //     cout<<temp<<" ";
    //     a=b;
    //     b=temp;    
    // }
            //Prime No
    
    bool isPrime=true;
    if(no==1)
        isPrime=false;
    for(int i=2;i<no/2+1;i++)
    {
        if(no%2==0)
        {
            isPrime=false;
            break;
        }        
    }
    if(isPrime)
    {
        cout<<"Prime No"<<endl;
    }
    else
        cout<<"Not a Prime No"<<endl;
}