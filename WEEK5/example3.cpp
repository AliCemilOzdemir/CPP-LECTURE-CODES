// github.com/AliCemilOzdemir
// Fifth Week Slide Page 8

#include <iostream>
using namespace std;

int main() 
{ 
    // Write a program that prints half a pyramid using ’*’
    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
} 
