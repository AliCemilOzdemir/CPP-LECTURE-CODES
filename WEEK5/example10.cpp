// github.com/AliCemilOzdemir
// Fifth Week Slide Page 14

#include <iostream>
using namespace std;

int main() 
{ 
//      Sum of First n Numbers
//  Write a program that prints the sum of the first n (user-input value)
//  integers
    int number;
    int sum = 0;
    cout<<"Enter a number, that program will compute the sum of the numbers from 1 to that number :";
    cin>>number;

    for (int i = 1; i <=number ; i++)
    {
        sum += i;
    }
    cout<<"sum: "<<sum;
    return 0;
} 
