// github.com/AliCemilOzdemir
// Fourth Week Slide Page 8

#include<iostream>
using namespace std;
int main()
{
    // Example: Exponentiation
    
    // Precondition: expo >= 0
    int expo = 4;
    int base = 5;
    double result = 1.0;
    while ( expo > 0 )
    {
    result *= base;
    expo -= 1;
    }
    // result = baseˆexpo
}