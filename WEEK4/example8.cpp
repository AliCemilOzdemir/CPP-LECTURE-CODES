// github.com/AliCemilOzdemir
// Fourth Week Slide Page 13

#include<iostream>
using namespace std;
int main()
{
// for loop vs. while loop
// while: Uncomment lines 10 to 16 and turn them into executable code.
/*int num,count=1;
cin>>num;
while ( count<=num)
{
    cout<<count<<endl;
    count++;
}*/

// for
int num;
cin>>num;
for( int count=1; count<=num;count++)
{
    cout<<count<<endl;
}

    return 0;
}