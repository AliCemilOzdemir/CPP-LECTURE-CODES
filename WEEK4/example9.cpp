// github.com/AliCemilOzdemir
// Fourth Week Slide Page 15

#include<iostream>
using namespace std;
int main()
{
for ( int a=1; a<10;a++)
{
    if( a==5)
    {
        continue; // skiptheiteration.
    }
    cout<< "value of a: " <<a<<endl;
}

    return 0;
}