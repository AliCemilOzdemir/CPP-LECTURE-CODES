// github.com/AliCemilOzdemir
// Fourth Week Slide Page 11

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    do {
        cout << "value of a: " << a;
        a = a + 1;
        if ( a > 15) {
            // terminate the loop
            break;
        }
    } while( a < 20 );

    return 0;
}