// github.com/AliCemilOzdemir
// Fifth Week Slide Page 14

#include <iostream>
using namespace std;

int main() 
{ 
// Calculating Averages
//  Write a program that takes n numbers iteratively from the user, in each
//  iteration computing and printing the average of the numbers till that
//  time.
    int counter;
    cout<<"How many number will you enter :";
    cin>>counter;

    int indicator = 1;
    int num;
    int sum = 0;
    float average;


    while(indicator != counter+1)
    {
        cout<<"Enter a number :";
        cin>>num;

        sum+= num;
        average = (float)(sum)/indicator;

        cout<<"Current average :"<<average<<endl;
        indicator++;
    }

    return 0;
} 
