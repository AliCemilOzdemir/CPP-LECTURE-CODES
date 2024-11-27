// github.com/AliCemilOzdemir
// Third Week Slide Page 21
#include<iostream>
using namespace std;
int main()
{
// Day of Week - Switch/Case Solution
    int day;
    cout<< "Enter an index for one of the seven days of the week:";
    cin>>day;

    switch (day)
    {
        case1:
            cout<<"Monday";
            break;
        case2:
            cout<<"Tuesday";
            break;
        case3:
            cout<<"Wednesday";
            break;
        case4:
            cout<<"Thursday";
            break;
        case5:
            cout<<"Friday";
            break;
        case6:
            cout<<"Saturday";
            break;
        case7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Notavalidday index";
            break;
    }
    
return 0;
}