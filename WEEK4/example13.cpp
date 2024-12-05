// github.com/AliCemilOzdemir
// Fourth Week Slide Page 20

#include<iostream>
using namespace std;
int main()
{
// Write a loop that prints the numbers 1 through 100 with each group of
// 10 numbers starting on a newline ,and every pair of numbers on a
// line separated by a space.
    for(int i = 1; i<=100; i++)
    {
        cout<<to_string(i)+" ";
        if(i%10 == 0)
        {
            cout<<endl;
        }
    }
    return 0;
}