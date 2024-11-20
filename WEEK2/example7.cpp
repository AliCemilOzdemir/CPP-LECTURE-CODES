// github.com/AliCemilOzdemir
// Second Week Slide Page 33
#include <iostream>

using namespace std;
int main()
{
// Exercise-1 
// Write a C++ program that inputs three integers from the keyboard and
// prints the sum, average, and product
    
    // variable definition
    int v1, v2, v3;
    
    // input process
    cout<<"Enter the 1. value: ";
    cin>>v1;

    cout<<"Enter the 2. value: ";
    cin>>v2;

    cout<<"Enter the 3. value: ";
    cin>>v3;

    // background calculations
    long long int sum = v1 + v2 + v3;
    long long int product = v1 * v2 * v3;
    float average = static_cast<float>(v1+v2+v3)/3;

    // printing the desired values
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"\tAverage:  "<<average<<endl;
    cout<<"\t    Sum:  "<<sum<<endl;
    cout<<"\tProduct:  "<<product<<endl;

return 0;
}