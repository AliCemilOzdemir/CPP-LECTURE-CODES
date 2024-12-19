// github.com/AliCemilOzdemir
// Sixth Week Slide Page 8

#include <iostream>
using namespace std;

int Exponential (int base, int expo)
{
    int result = 1;
    for ( int i = 0; i < expo; i++ )
    {
        result = result*base;
    }
return result ;
}


int main()
{
    // Re-Writing Copy-Paste Code Using Functions
    int twoExpFour = Exponential(2, 4);
    cout << "2^4 is " << twoExpFour << endl;
 
    int tenExpThree = Exponential(10, 3);
    cout << "10^3 is " << tenExpThree << endl;

return 0;
}