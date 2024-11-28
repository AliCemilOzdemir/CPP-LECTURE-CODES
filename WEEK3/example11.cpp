// github.com/AliCemilOzdemir
// Third Week Slide Page 28

#include<iostream>
using namespace std;
int main()
{
    // AnInteractiveCodeonBroccoli
    char response;
    cout<<"Do you like broccoli [y/n]>";
    cin>>response;

    if ( response=='y')
    {
        cout<<"Good for you,broccoli is healthy\n";
    }
    else
    {
        cout<<"Well, there'sno accounting for taste..\n";
    }
    return 0;
}