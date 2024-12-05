// github.com/AliCemilOzdemir
// Fourth Week Slide Page 19

#include<iostream>
using namespace std;
int main()
{
// Task: Complete the following loop so that it prints all powers of two
//  less than 30,000, starting with 1 2 4 8 16 .
    int num = 1;
    
    while ( num < 30000 )
    {
        cout << num << "\n";
        num *= 2;
    }
    
    return 0;
}