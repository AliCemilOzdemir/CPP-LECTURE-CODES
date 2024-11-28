// github.com/AliCemilOzdemir
// Third Week Slide Page 30

#include<iostream>
using namespace std;

int main()
{
    int f,s;
    cout<<"Enter two numbers: ";
    cin>>f>>s;

    if(s == 0)
    {
        cout<<"Seconde number can not be 0.";
    }
    else if(f % s == 0)
    {
        cout<<"The first integer is a multiple of second integer"<<endl;
    }
    else
    {
        cout<<"The first integer is not a multiple of second integer"<<endl;
    }
    return 0;
}