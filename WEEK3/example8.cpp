// github.com/AliCemilOzdemir
// Third Week Slide Page 23
#include<iostream>
using namespace std;

int main()
{
// Day of Week Exercise using enum
enum Day{MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY};
int today;

cout<<"Enter the day today: " ;
cin>>today;

switch(today)
{
    case MONDAY:
        cout<<"Monday";
        break;
    case TUESDAY:
        cout<<"Tuesday";
        break;
    // GOES ACCORDINGLY
}
return(0);
}