// github.com/AliCemilOzdemir
// Fifth Week Slide Page 10

#include <iostream>
using namespace std;

int main() 
{
// Write a program that prints an inverted half pyramid using ‘*’, as
//  below, but the number of rows must be taken as input from the user.
    int rows;

    cout<<"Enter the number of rows :";
    cin>>rows;

    for (int i = rows; i > 0; i--)
    {
        for (int j = i; j >0 ; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
} 
