// github.com/AliCemilOzdemir
// Fifth Week Slide Page 15

#include <iostream>
using namespace std;

int main() 
{
    cout<<"    &"<<endl;
    for (int i = 2; i <= 4; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            cout<<" ";
        }
        cout<<"&";
        for (int j = 1; j <=2*i-3; j++)
        {
            cout<<" ";
        }
        cout<<"&";
        cout<<endl;
    }
    cout<<"&&&&&&&&&";

    return 0;
}
