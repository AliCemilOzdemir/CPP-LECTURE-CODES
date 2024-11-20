// github.com/AliCemilOzdemir
// Second Week Slide Page 34
#include <iostream>

using namespace std;

int main()
{
// Exercise-2
// Write a program that gets the radius of a circle and prints the diameter,
// area and circumference. Use the constant value 3.14159 for pi value

    // variable identification
    float PI = 3.14159;
    float radius;
    double diameter, circumference;
    long double area;

    // input process
    cout<<"Enter the radius of a circle :";
    cin>>radius;

    // background calculations
    diameter = 2 * radius;
    circumference = diameter * PI;
    area = radius * PI * PI;

    // Generating output
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"\tradius :"<<radius<<endl;
    cout<<"\tdiameter :"<<diameter<<endl;
    cout<<"\tcircumference :"<<circumference<<endl;
    cout<<"\tarea :"<<area<<endl;
    

return 0;
}