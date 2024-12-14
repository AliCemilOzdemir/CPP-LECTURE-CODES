// github.com/AliCemilOzdemir
// Fifth Week Slide Page 9

#include <iostream>
#include<cmath>
using namespace std;

int main() 
{ 
    // Nested for Example : Finding Prime Numbers
    // List the prime numbers less than 100
    bool isPrime = true;
    int count = 0;
    for(int i=2; i<100; i++)
    {  
        isPrime = true;
        for(int j=sqrt(i); j>1; j--)
        {
            if(i % j == 0)
            {
                isPrime = false;
            }
        }
        if(isPrime == true)
        {
            count++;
            cout<<i<<endl;
        }
    }
    cout<<count<<" tane";
    return 0;
} 
