// github.com/AliCemilOzdemir
// Fourth Week Slide Page 10

#include<iostream>
using namespace std;
int main()
{
    // The do {} while Statement
    // precondition: low<=high
    int value, low, high;
    
    cout<<"Enter lower and upper bounds:";
    cin>>low>>high;
    
    do
    {
        cout<< "Enter a number between"<<low<<" and "<<high<<":" ;
        cin>>value;
    }while (value<low || value>high);
    
    
    return 0;
}