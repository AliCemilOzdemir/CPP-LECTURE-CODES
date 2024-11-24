// github.com/AliCemilOzdemir
// Third Week Slide Page 20
#include<iostream>
using namespace std;
int main()
{
    // Day of Week - If / Else Solution
    int day;
    cout<< "Enteranindex for oneof the sevendaysoftheweek:";
    cin>>day;
    
    if (day==1)
            cout<< "Monday\n";
    else if (day==2)
        cout<< "Tuesday\n";
    else if (day==3)
        cout<< "Wednesday\n";
    else if (day==4)
        cout<< "Thursday\n";
    else if (day==5)
        cout<< "Friday\n" ;
    else if (day==6)
        cout<< "Saturday\n";
    else if (day==7)
        cout<< "Sunday\n";
    else
        cout<< "Notavalid day index\n";
return 0;
}